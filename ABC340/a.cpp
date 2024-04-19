#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  int a,b,d;
  cin>>a>>b>>d;
  int t = a;
  while(t <= b) {
    cout<<t;
    t += d;
    if (t <= b) cout<<" ";
  }
  cout<<endl;
}
