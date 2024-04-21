#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  string s;
  cin >> s;
  int n = s.size();
  int cnt = 0;

  for (int i = 0; i < n; i++) {
    vector<string> a(n);
    for (int j = 0; j < n-i; j++) {
      string temp = s.substr(j, i+1);
      auto itr = find(a.begin(), a.end(), temp);
      if (itr == a.end()) {
        // cout << temp << endl;
        cnt++;
        a.push_back(temp);
      }
    }
  }

  cout << cnt << endl;
}
