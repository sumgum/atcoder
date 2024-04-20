#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int cnt = 0;
  for (int i = 0; i < n; i++) {
    // 探索の開始はi+1番目の要素でいい
    std::vector<int>::iterator itr = find(a.begin(), a.end(), i+1);
    int tempA = *itr;
    int tempB = i;
    
    if (tempA != temp)

  }
}