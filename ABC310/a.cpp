#include<bits/stdc++.h>
#include <iostream>
#include <regex>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
  int n,p,q;
  cin >> n >> p >> q;
  vector<int> d(n);
  rep(i,n) cin >> d[i];
  sort(d.begin(), d.end());

  int result = min(p, q + d[0]);
  cout << result << endl;
}

