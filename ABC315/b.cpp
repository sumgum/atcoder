#include<bits/stdc++.h>
#include <iostream>
#include <regex>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
  int m;
  cin >> m;
  vector<int> d(m);
  rep(i,m) cin >> d[i];
  int sum = reduce(d.begin(),d.end());
  int half = (sum / 2) + 1;

  int month = 0;
  int day = 0;
  rep(i,m) {
    if (d[i] <= half) {
      half -= d[i];
    } else {
      month = i + 1;
      day = half;
      break;
    }

    if (half == 0) {
      month = i + 1;
      day = d[i];
      break;
    }
  }

  cout << month << " " << day << endl;
  return 0;
}
