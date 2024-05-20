#include<bits/stdc++.h>
#include <iostream>
#include <regex>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
  int n;
  cin >> n;
  vector<int> p(n);
  rep(i,n) cin >> p[i];
  int result = 0;
  rep(i,n) {
    if (i != 0) {
      result = max(result, p[i] -p[0] + 1);
    }
  }

  cout << result << endl;
}

