#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
  int n, x, y, z;
  cin >> n >> x >> y >> z;
  if (x < z && z < y) {
    cout << "Yes" << endl;
    return 0;
  }
  if (y < z && z < x) {
    cout << "Yes" << endl;
    return 0;
  }


    cout << "No" << endl;
    return 0;
}
