#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
  int a,b,c,d,e,f;
  cin >> a >> b >> c >> d >> e >> f;
  int n;
  cin >> n;
  rep(i,n) {
    int x;
    cin >> x;
    int canPay,pay;
    if (x >= 500 && f > 0) {
      canPay = x/500;
      pay = min(canPay,f);
      f -= pay;
      x -= pay*500;
    }
    if (x >= 100 && e > 0) {
      canPay = x/100;
      pay = min(canPay,e);
      e -= pay;
      x -= pay*100;
    }
    if (x >= 50 && d > 0) {
      canPay = x/50;
      pay = min(canPay,d);
      d -= pay;
      x -= pay*50;
    }
    if (x >= 10 && c > 0) {
      canPay = x/10;
      pay = min(canPay,c);
      c -= pay;
      x -= pay*10;
    }
    if (x >= 5 && b > 0) {
      canPay = x/5;
      pay = min(canPay,b);
      b -= pay;
      x -= pay*5;
    }
    if (x >= 1 && a > 0) {
      canPay = x;
      pay = min(canPay,a);
      a -= pay;
      x -= pay*1;
    }
    // ここまででxが0でなければ支払い不可
    if (x != 0) {
      cout << "No" << endl;
      return 0;
    }
    // cout << "i:" << i << "; x:" << x << endl;
    // cout << "a:" << a << "; b:" << b << "; c:" << c << "; d:" << d << "; e:" << e << "; f:" << f << endl;
  }

  cout << "Yes" << endl;
  return 0;
}
