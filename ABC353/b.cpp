#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
  int n,k;
  cin >> n >> k;
  int nokori = k;
  int count = 0;
  rep(i,n) {
    int a;
    cin >> a;
    if (i == n-1) {
      if (nokori < a) {
        count++;
      }
      count++;
      continue;
    }

    if (nokori >= a) {
      nokori -= a;
      continue;
    } else {
      nokori = k - a;
      // cout << i << " " << a << endl;
      count++;
    }

  }

  cout << count << endl;
  return 0;

}
