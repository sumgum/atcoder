#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
  int x,y;
  cin >> x >> y;
  int dif = y - x;
  if (0 < dif && dif <= 2) {
    cout << "Yes" << endl;
    return 0;
  }
  if (-3 <= dif && dif < 0) {
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
  return 0;
}
