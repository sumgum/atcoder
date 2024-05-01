#include<bits/stdc++.h>
#include <iostream>
#include <regex>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
  int n,q;
  cin >> n >> q;
  string s;
  cin >> s;
  // indexがnから末尾までの部分文字列の連続する文字列の個数を格納する配列
  vector<int> c(n,0);
  int count = 0;
  rep(i,n) {
    if (s[n-i-1] == s[n-i]) {
      ++count;
    }
    c[n-i-1] = count;
  }

  // TODO debug
  // rep(i,n) {
  //   cout << c[i] << endl;
  // }

  rep(i,q) {
    int l,r,out;
    cin >> l >> r;
    out = c[l-1] - c[r-1];
    cout << out << endl;
  }
}
