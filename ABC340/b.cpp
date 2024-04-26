#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
  int q;
  cin >> q;
  vector<int> a;
  a.reserve(q);
  int count = 0;
  rep(i,q) {
    int x, num;
    cin >> x >> num;
    if (x == 1) {
      a.push_back(num);
      count++;
    } else {
      int b = a[count-num];
      cout << b << endl;
    }
  }
}
