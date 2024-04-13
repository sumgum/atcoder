#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  int sum = 0;
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    sum += A[i];
  }

  cout << -sum;
}