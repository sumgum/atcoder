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
  int max1 = 0;
  int max2 = 0;
  rep(i,n) {
    int a;
    cin >> a;
    if (a > max1) {
      max2 = max1;
      max1 = a;
    } else if (max1 > a && a > max2) {
      max2 = a;
    }
  }
  cout << max2 << endl;
}
