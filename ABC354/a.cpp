#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
  ll h;
  cin >> h;
  int count = 0;
  ll height = 0;
  while(true) {
    if (h >= height) {
      height += (ll) pow(2,count);
      count++;
    } else {
      break;
    }
  }

  cout << count << endl;
  return 0;
}
