#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;

int main(){
  int N,A,B;
  A = 0;
  B = 0;
  cin >> N;
  vector<int> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }
  sort(a.rbegin(), a.rend());
  for (int i = 0; i < N; i++) {
    if (i % 2 == 0) A += a[i];
    else B += a[i];
  }
  cout << A - B;
}