#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
  int n,m,p;
  cin >> n >> m >> p;
  int cnt = 0;
  if (n < m) {
    cout << cnt << endl;
    return 0;
  }

  cnt++;
  while(true) {
    if (m + p*cnt <= n) {
      cnt++;
    } else {
      break;
    }
  }

  cout << cnt << endl;
  return 0;
}
