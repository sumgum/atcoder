#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
  int n = 0;
  cin >> n;
  vector<string> a(n);
  vector<string> b(n);
  rep(i,n) cin >> a[i];
  rep(i,n) cin >> b[i];
  rep(i,n) {
    rep(j,n) {
      char tempA = a[i][j];
      char tempB = b[i][j];
      if (tempA != tempB) {
        // cout << tempA << endl;
        // cout << tempB << endl;

        cout << i+1 << " " << j+1 << endl;
        return 0;
      }
    }
  }
}
