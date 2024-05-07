#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
  ll n;
  cin >> n;
  while(true) {
    if (n%2 == 0) {
      n /= 2;
      continue;
    } else if (n%3 == 0) {
      n /= 3;
      continue;
    } else if (n == 1) {
      cout << "Yes" << endl;
      return 0;
    } else if (n%2 != 0 && n%3 != 0 && n!= 1) {
      cout << "No" << endl;
      return 0;
    }
  }
}
