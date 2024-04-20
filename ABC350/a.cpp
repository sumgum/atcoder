#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  string s;
  cin >> s;

  int a = stoi(s.substr(3,3));
  if (a > 0 && a < 350 && a != 316) {
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
  return 0;
}