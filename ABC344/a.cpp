#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  string s;
  cin >> s;
  int n = s.size();
  bool addable = true;
  for (int i = 0; i < n; i++) {
    if (s[i] == '|') addable = (!addable);
    if (s[i] != '|' && addable) {
      cout<<s[i];
    }
  }
  cout<<endl;
}
