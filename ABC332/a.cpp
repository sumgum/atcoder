#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;

int main(){
  int n,s,k;
  cin>>n>>s>>k;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    int p,q;
    cin>>p>>q;
    sum += p*q;
  }
  if (sum < s) sum += k;
  cout<<sum<<endl;
}
