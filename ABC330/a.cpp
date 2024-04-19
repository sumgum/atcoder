#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;

int main(){
  int n,l;
  int count = 0;
  cin>>n>>l;
  for (int i = 0; i < n; i++) {
    int a = 0;
    cin>>a;
    if (a >= l) {
      count++;
    }
  }
  cout<<count<<endl;
}
