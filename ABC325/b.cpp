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
  vector<int> w(n);
  vector<int> x(n);
  int result = 0;
  rep(i,n) {
    cin >> w[i] >> x[i];
  }

  // TODO debug用
  // rep(i,n) {
  //   cout << "w" << w[i] << endl;
  //   cout << "x" << x[i] << endl;
  //   cout << (x[i]+1)%24 << endl;
  // }

  rep(i,24) {
    int temp = 0;
    rep(j,n) {
      if (9 <= (x[j]+i)%24 && (x[j]+i)%24 <= 17 ) {
        temp += w[j];
      }
    }
    result = max(result,temp);
  }

  cout << result;
}
