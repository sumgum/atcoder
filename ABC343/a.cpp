#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  int a,b;
  cin>>a>>b;
  int c;
  c = a + b;
  for (int i = 0; i < 10; i++) {
    if (i != c) {
      cout<<i<<endl;
      break;
    }
  }
}
