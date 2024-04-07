#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  vector<int> C(N);
  vector<int> colorStack;
  int result;

  vector<int> A_min;
  vector<int> C_min;
  vector<int> i_min;

  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
    cin >> C.at(i);
  }

  result = 0;

  for (int i = 0; i < N; i++) {
    if (find(colorStack.begin(),colorStack.end(),C.at(i)) != colorStack.end()) {
      colorStack.push_back(C.at(i));
      if (A.at(i) < result) {
        result = A.at(i);
      }
    } else {
      if (A.at(i) > result) {
        result = A.at(i);
      }
    }
  }

  cout << result;
}