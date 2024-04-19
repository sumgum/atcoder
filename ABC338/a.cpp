#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;

int main(){
  string s;
  cin>>s;
  int n = s.size();

  if (!isupper(s[0])) {
    cout<<"No"<<endl;
    return 0;
  }
  for (int i = 1; i < n; i++) {
    if (!islower(s[i])) {
      cout<<"No"<<endl;
      return 0;
    }
  }

  cout<<"Yes"<<endl;
  return 0;
}
