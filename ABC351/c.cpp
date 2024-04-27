#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int sub(vector<ll>& a){
  int count = a.size();

  if (count <= 1) {
    return 0;
  } else if (a[count-1] == a[count-2]) {
    ll temp = a[count-2]+1;
    a[count-2] = temp;
    a.erase(a.end()-1);
    // ここで再起的に呼び出し
    return sub(a);
  } else {
    return 0;
  }
}

int main(){
  int n;
  cin >> n;
  vector<ll> a;
  a.reserve(n);

  rep(i,n) {
    ll temp;
    cin >> temp;
    a.push_back(temp);

    sub(a);
  }

  cout << a.size() << endl;
}
