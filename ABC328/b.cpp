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
  int result = 0;
  for (int i = 1; i <= n; i++) {
    int d;
    cin >> d;
    // 月が一桁、日数が一桁のゾロ目
    if (i <= 9 && i <= d) {
      // cout << "i:" << i << ";d:" << d << endl;
      result++;
    }
    // 月が一桁、日数が二桁のゾロ目
    if (i*11 <= d) {
      // cout << "i11:" << i << ";d:" << d << endl;
      result++;
    }
    // 月が二桁、日数が一桁のゾロ目
    if (i%11 == 0 && (i/11) <= d) {
      // cout << "n:" << n << ";d:" << d << endl;
      result++;
    }
    // 月が二桁、日数が二桁のゾロ目
    if (i%11 == 0 && i <= d) {
      // cout << "n:" << n << ";d:" << d << endl;
      result++;
    }
  }

  cout << result << endl;
}
