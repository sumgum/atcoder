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
  rep(i,s.size()) {
    if (i != 0) {
      cout << " ";
    }
    cout << s[i];
  }
}
