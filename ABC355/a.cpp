#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;

int main(){
  int a,b;
  cin >> a >> b;
  if (a == b) {
    cout << -1 << endl;
    return 0;
  }

  int result;
  if (a != 1 && b != 1) result = 1;
  if (a != 2 && b != 2) result = 2;
  if (a != 3 && b != 3) result = 3;

  cout << result << endl;
  return 0;
}
