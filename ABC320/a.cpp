#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
  int a,b;
  ll result;
  cin >> a >> b;
  result = pow(a,b) + pow(b,a);
  cout << result << endl;
}
