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
  vector<ll> b(n);
  vector<ll> c(n);
  ll d = 0;
  ll result = 0;
  rep(i,n) {
    cin >> a[i] >> b[i];
    d = max(d,b[i]-a[i]);
    result += a[i];
  }
  result += d;
  cout << result << endl;
}
