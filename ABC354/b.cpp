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
  vector<string> s(n);
  vector<int> c(n);
  vector<string> ref(n);
  int rateSum = 0;

  rep(i,n) {
    cin >> s[i] >> c[i];
    ref[i] = s[i];
    rateSum += c[i];
  }

  int mod = rateSum % n;

  // 参照配列のソート
  sort(ref.begin(), ref.end());

  cout << ref[mod] << endl;
  return 0;
}
