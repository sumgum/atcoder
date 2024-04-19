#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;

int main(){
  int n;
  cin>>n;
  int x = 0;
  int y = 0;
  for (int i = 0; i < n; i++) {
    int xi,yi;
    cin>>xi>>yi;
    x += xi;
    y += yi;
  }

  string s;
  if (x > y) {
    s = "Takahashi";
  } else if (y > x) {
    s = "Aoki";
  } else {
    s = "Draw";
  }
  cout<<s<<endl;
}
