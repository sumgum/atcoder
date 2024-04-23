#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

ll partSum(ll a, ll b) {
  ll result;
  result = (b + a) * (b - a + 1) / 2;
  return result;
}

int main(){
  int n, k;
  cin >> n >> k;
  vector<ll> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());


  ll result = 0;
  result = partSum(1, k);
  ll temp = -1;
  for (int i = 0; i < n; i++) {
    if (a[i] == temp) {
      continue;
    } else if (a[i] != temp && a[i] <= k) {
      result -= a[i];
      temp = a[i];
    } else {
      break;
    }
  }
  cout << result << endl;
}
