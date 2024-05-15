#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
  int n,h,x;
  cin >> n >> h >> x;
  int count = 0;
  while(true) {
    int p;
    cin >> p;
    count++;
    if (h+p >= x) {
      break;
    }
  }

  cout << count << endl;
}
