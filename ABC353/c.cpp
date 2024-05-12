#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(auto &v : a) cin >> v;
  sort(a.begin(), a.end());
  int r = n;
  ll cnt = 0, res = 0;
  rep(i,n) {
    // ここがわからん
    r = max(r, i + 1);
    while(r - 1 > i and a[r - 1] + a[i] >= 100000000) {
      r--;
    }
    cnt += n - r;
  }
  rep(i,n) res += ll(a[i]) * (n - 1);
  res -= cnt * 100000000;
  cout << res << endl;
}
