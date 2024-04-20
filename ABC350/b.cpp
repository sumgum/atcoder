#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main(){
  int n,q;
  cin >> n >> q;
  vector<int> t(q);
  vector<int> condition(n,1);
  for (int i = 0; i < q; i++) {
    cin >> t[i];
  }

  // for (int i = 0; i < n; i++) {
  //   cout << i << "condition:" << condition[i] << endl;
  // }

  int cnt = n;
  // cout << "start:" << n << endl;
  for (int i = 0; i < q; i++) {
    // cout << "ti:" << t[i] <<endl;
    // cout << "conditionti:" << condition[t[i]-1] <<endl;
    if (condition[t[i]-1] == 1) {
      cnt--;
      condition[t[i]-1] = 0;
    } else {
      cnt++;
      condition[t[i]-1] = 1;
    }
    // cout << i << "回目:" << cnt << endl;
  }
  cout << cnt << endl;
}