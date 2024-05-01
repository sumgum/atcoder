#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
  int n,x;
  cin >> n >> x;
  int result = 0;
  rep(i,n) {
    int s;
    cin >> s;
    if (s <= x) result += s;
  }
  cout << result << endl;
}
