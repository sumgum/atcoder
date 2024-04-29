#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  int n = s.size();
  int max = 0;
  int count = 1;
  char c = s[0];
  rep(i,n-1) {
    if (s[i] == s[i+1]) {
      ++count;
      if (count > max) {
        c = s[i];
        max = count;
      }
    } else {
      count = 1;
      continue;
    }
  }

  cout << c << endl;
}
