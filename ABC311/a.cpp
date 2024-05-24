#include<bits/stdc++.h>
#include <iostream>
#include <regex>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
  int n;
  string s;
  cin >> n >> s;
  bool a = false, b = false, c = false;
  int result = 0;
  rep(i,n) {
    if (s[i] == 'A') a = true;
    if (s[i] == 'B') b = true;
    if (s[i] == 'C') c = true;

    if (a && b && c) {
      result = i + 1;
      break;
    }
  }

  cout << result << endl;
}

