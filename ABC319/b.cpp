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
  for(int i = 0; i <= n; i++) {
    bool flag = false;
    for (int j = 1; j <= 9; j++) {
      if (flag) {
        continue;
      }
      if (n % j == 0 && i%(n/j) == 0) {
        cout << j;
        flag = true;
        continue;
      }
    }
    if (!flag) {
      cout << "-";
    }
  }
}
