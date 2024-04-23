#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int partSum(int a, int b) {
  int result;
  result = (b + a) * (b - a + 1) / 2;
  // cout << a << endl;
  // cout << b << endl;
  // cout << result << endl;
  return result;
}

int main(){
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());

  int result = 0;
  int temp = a[0];
  for (int i = 0; i < n; i++) {
    if (a[i] == temp || a[i] == temp+1) {
      temp = a[i];
    } else {
      result += partSum(temp+1, a[i]-1);
      temp = a[i];
    }
  }
  if (a[n-1] < k) {
    result += partSum(temp+1, k);
  }
  cout << result << endl;
}
