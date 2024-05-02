#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
  int n;
  string s;
  cin >> n >> s;

  rep(i,n-1) {
    if (s[i] == 'a' && s[i+1] == 'b') {
      cout << "Yes" << endl;
      return 0;
    }
    if (s[i] == 'b' && s[i+1] == 'a') {
      cout << "Yes" << endl;
      return 0;
    }
  }

    cout << "No" << endl;
    return 0;
}
