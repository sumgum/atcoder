#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;

int main(){
  int a,b;
  cin>>a>>b;
  int solidFat = a + b;
  if (solidFat >= 15 && b >= 8) {
    cout<<1<<endl;
  } else if (solidFat >= 10 && b >= 3) {
    cout<<2<<endl;
  } else if (solidFat >= 3) {
    cout<<3<<endl;
  } else {
    cout<<4<<endl;
  }
  return 0;
}
