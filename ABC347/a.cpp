#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  int N,K;
  cin >> N >> K;
  vector<int> A(N);
  vector<int> R;
  R.reserve(N);
  for (int i = 1; i <= N; i++) {
    cin >> A[i];
    if (A[i] % K == 0) {
      R.push_back(A[i] / K);
    }
  }
  sort(R.begin(), R.end());
  for (int i = 0; i < R.size(); i++) cout << " ";


}