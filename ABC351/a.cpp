#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
  int a = 0;
  int b = 0;
  rep(i,9) {
    int temp = 0;
    cin >> temp;
    a += temp;
  }
  rep(i,8) {
    int temp = 0;
    cin >> temp;
    b += temp;
  }
  int result = a - b + 1;
  cout << result << endl;
}
