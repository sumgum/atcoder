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
  vector<ll> a(n);
  rep(i,n) cin >> a[i];
  for (int i = 0; i < n-1; i++) {
    ll s,t,u;
    cin >> s >> t;
    u = a[i] / s;
    a[i+1] += u * t;
  }
  cout << a[n-1] << endl;
}
