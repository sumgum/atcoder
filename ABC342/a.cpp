#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  string s;
  cin>>s;
  int n = s.size();

  if (s[0] != s[1] && s[0] != s[2]) {
    cout<<1<<endl;
    return 0;
  }
  if (s[1] != s[0] && s[1] != s[2]) {
    cout<<2<<endl;
    return 0;
  }
  // これ以降はすべて0文字目と1文字目は同じ文字であるパターンのみ
  for (int i = 1; i < n-1; i++) {
    if (s[i] != s[i+1]) {
      cout<<i+2<<endl;
      return 0;
    }
  }
}
