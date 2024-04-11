#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;

int main(){
  int res,N,A,B;
  cin >> N >> A >> B;
  res = 0;
  for (int i = 1; i <= N; i++) {
    // 各行の和を取得する
    int sum = 0;
    int temp = i;
    int mod = 0;
    while(true) {
        mod = (temp % 10);
        sum += mod;
      if (temp >= 10) {
        temp = (temp - mod) / 10;
      } else {
        break;
      }
    }
    if (A <= sum && sum <= B) {
      res += i;
    }
  }
  cout << res;
}