#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
  int n,m;
  string s,t;
  cin >> n >> m >> s >> t;
  bool head = true;
  bool tail = true;
  int sizeS = s.size();
  int sizeT = t.size();
  rep(i,sizeS) {
    if (s[i] != t[i]) {
      head = false;
    }
    if (s[i] != t[sizeT-sizeS+i]) {
      tail = false;
    }
  }

  if (head && tail) {
    cout << 0 << endl;
  } else if (head && !tail) {
    cout << 1 << endl;
  } else if (!head && tail) {
    cout << 2 << endl;
  } else {
    cout << 3 << endl;
  }
}
