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
  while(true) {
    int x,y,z;
    x = n / 100;
    y = n / 10 - x * 10;
    z = n % 10;

    if (x * y == z) {
      cout << n << endl;
      return 0;
    } else {
      n++;
    }
  }
}
