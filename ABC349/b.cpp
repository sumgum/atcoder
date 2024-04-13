#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  string S;
  cin >> S;
  vector<char> C(S.size());
  vector<int> Streak;
  Streak.reserve(S.size());

  for (int i = 0; i < S.size(); i++) {
    C[i] = S[i];
  }
  sort(C.begin(), C.end());

  // for (int i = 0; i < S.size(); i++) {
  //   cout << C[i] << endl;
  // }

  int streak = 1;
  bool isYes = true;
  for (int i = 0; i < S.size()-1; i++) {
      if (C[i] == C[i+1]) {
        streak++;
      } else {
        Streak.push_back(streak);
        streak = 1;
      }
  }

  for (int i = 0; i < Streak.size(); i++) {
    // Streakに含まれるi(1からStreak.size()までの整数)の数が0または2であることを確認する
    // iの数を取得する
    int count = std::count(Streak.begin(), Streak.end(), i);
    if (count != 0 && count != 2) {
      isYes = false;
    }
  }

  if (isYes) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

}