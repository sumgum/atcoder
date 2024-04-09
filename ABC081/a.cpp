#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  string s;
  cin >> s;
  int n = 0;
  for (int i =0; i < 3; i++) {
    if (s[i] == '1') ++n;
  }
  cout << n << endl;
}