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
  for (int i = 1; i <= n; i++) {
    vector<string> a;
    a.reserve(n);

    for (int j = 0; j < n-i+1; j++) {
      string temp = s.substr(j,i);

      if (isStreak(temp)) {
        auto it = find(a.begin(), a.end(), temp);
        if (it != a.end()) {
          continue;
        } else {
          // cout << "aaaaaa:" << temp << endl;
          a.push_back(temp);
          count++;
        }
      } else {
        continue;
      }
    }

  }

  cout << count << endl;
}
