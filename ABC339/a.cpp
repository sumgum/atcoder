#include<bits/stdc++.h>
#include <iostream>
using namespace std;

vector<string> split_native(const string &s, char delim) {
  vector<string> elems;
  string item;
  for(char ch: s) {
    if (ch == delim) {
      if (!item.empty())
        elems.push_back(item);
      item.clear();
    }
    else {
      item += ch;
    }
  }
  if (!item.empty())
    elems.push_back(item);
  return elems;
}

int main(){
  string s;
  cin>>s;
  
  vector<string> a(s.size());
  a = split_native(s,'.');
  cout<<a[a.size()-1];
}
