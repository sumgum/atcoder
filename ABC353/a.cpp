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
  int first;
  cin >> first;
  rep(i,n-1) {
    int temp;
    cin >> temp;
    if (first < temp) {
      cout << i+2 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;

}
