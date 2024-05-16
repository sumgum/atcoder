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
  vector<int> a(n);
  rep(i,n) cin >> a[i] ;
  sort(a.begin(), a.end());

  int result;
  rep(i,n-1) {
    if (a[i]+1 != a[i+1]) {
      result = a[i]+1;
      break;
    }
  }

  cout << result << endl;
}
