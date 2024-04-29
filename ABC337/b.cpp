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
  int n = s.size();
  rep(i,n-1) {
    if (s[i] == 'A') {
      continue;
    } else if (s[i] == 'B') {
      if (s[i+1] == 'A') {
        cout << "No" << endl;
        return 0;
      }
    } else if (s[i] == 'C') {
      if (s[i+1] == 'B' || s[i+1] == 'A') {
        cout << "No" << endl;
        return 0;
      }
    } else {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}
