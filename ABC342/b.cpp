#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
  int n,q;
  cin >> n;
  vector<int> p(n);
  rep(i,n) cin >> p[i];
  cin >> q;
  rep(i,q) {
    int a,b;
    cin >> a >> b;
    rep(i, n) {
      if (a == p[i]) {
        cout << a << endl;
        break;
      } else if (b == p[i]) {
        cout << b << endl;
        break;
      }
    }
  }
}
