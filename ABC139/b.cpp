#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;

int main(){
  int a,b;
  int c = 0;
  int d = 1;
  cin>>a>>b;
  while (d < b) {
    d += (a-1);
    c++;
  }
  cout<<c<<endl;
}
