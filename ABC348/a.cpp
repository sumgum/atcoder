#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  int a;
  cin >> a;

  for (int i = 0; i < a; i++) {
    if ((i+1) % 3 == 0){
      cout << "x";
    } else {
      cout << "o";
    }
  }
  cout << endl;

}