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
  int OFFSET = -1;
  for (int i = 1; i <= 16; i++) {
    if (i%2 == 0 && s[i+OFFSET] != '0') {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
