#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
  ll temp;
  cin >> temp;
  if (temp > 0 && temp % 10 != 0) {
    temp = (temp / 10) + 1;
  } else {
    temp = temp / 10;
  }
  cout << temp << endl;
}
