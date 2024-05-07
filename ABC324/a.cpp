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
  int a;
  rep(i,n) {
    int b;
    cin >> b;
    if (i == 0) {
      a = b;
      continue;
    }

    if (a != b) {
      cout << "No" << endl;
      return 0;
    }

    a = b;
  }

  cout << "Yes" << endl;
  return 0;
}
