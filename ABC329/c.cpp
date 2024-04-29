#include<bits/stdc++.h>
#include <iostream>
#include <regex>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

bool isStreak(string s) {
  // 1文字
  if (s.size() == 1) {
    return true;
  }

  // 2文字以上
  for (int i = 0; i < s.size()-1; i++) {
    if (s[i] != s[i+1]) {
      return false;
    }
  }
  return true;
}

int main(){
  int n;
  string s;
  cin >> n >> s;

  int count = 0;
  bool continueFlag = false;
  for (int i = 1; i <= n; i++) {
    if (continueFlag) {
      continue;
    }

    int tempCount = 0;
    vector<char> a;
    a.reserve(n);

    for (int j = 0; j < n-i+1; j++) {
      char c = s[j];
      string temp = s.substr(j,i);

      auto it = find(a.begin(), a.end(), c);
      if (it != a.end()) {
        continue;
      } else {
        if (isStreak(temp)) {
          a.push_back(c);
          count++;
          tempCount++;
        } else {
          continue;
        }
      }
    }

    if (tempCount == 0) {
      continueFlag = true;
    }
  }

  cout << count << endl;
}
