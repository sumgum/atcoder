#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
  vector<ll> a(100,-1);
  rep(i, 100) cin >> a[i];
  rep(i, 100) {
    if (a[99-i] != -1) {
      cout << a[99-i] << endl;
    }
  }
}
