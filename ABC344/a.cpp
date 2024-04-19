#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  string s;
  cin >> s;
  string t;
  int count = 0;
  for (char c: s) {
    if (c == '|') {
      count++;
    } else {
      if (count != 1) {
        t += c;
      }
    }
  }
  cout<<t<<endl;
}
