#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
  string s, t;
  cin >> s >> t;
  int n = t.size();
  int c = 0;
  int flag = -1;
  rep(i,n) {
    if (s[c] == t[i]) {
      c++;
      // cout << "aaas[i]:" << s[i] << ";" << "t[c]:" << t[c] << endl;
      if (flag > 0) {
        cout << " ";
      }
      cout << i+1;
      flag = 1;
      continue;
    } else {
      // cout << "bbbs[i]:" << s[i] << ";" << "t[c]:" << t[c] << endl;
      continue;
    }
  }
}
