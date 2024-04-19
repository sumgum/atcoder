#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  string s;
  cin>>s;
  
  int n = s.rfind('.');
  cout<<s.substr(n+1);
}
