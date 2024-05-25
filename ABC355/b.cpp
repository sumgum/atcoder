#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
  int n,m;
  cin >> n >> m;
  vector<int> a(n);
  vector<int> b(m);
  vector<int> c(n+m);

  rep(i,n) {
    cin >> a[i];
    c[i] = a[i];
  }

  rep(i,m) {
    cin >> b[i];
    c[i+n] = b[i];
  }

  sort(c.begin(), c.end());
  bool beforeIsA = false;
  rep(i,n+m) {
    bool currentIsA = false;
    // i番目の要素がaの要素か判定
    auto itr = find(a.begin(), a.end(), c[i]);
    if (itr != a.end()) currentIsA = true;

    if (beforeIsA && currentIsA) {
      cout << "Yes" << endl;
      return 0;
    }

    if (currentIsA) {
      beforeIsA = true;
    } else {
      beforeIsA = false;
    }
  }

  cout << "No" << endl;
}
