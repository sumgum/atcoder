#include<bits/stdc++.h>
#include <iostream>
#include <regex>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
  string s;
  cin >> s;
  string result = "No";
  if (
    s == "ACE"
    || s == "BDF"
    || s == "CEG"
    || s == "DFA"
    || s == "EGB"
    || s == "FAC"
    || s == "GBD"
  ) {
    result = "Yes";
  }

  cout << result << endl;
}

