#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;

int main(){
  int N;
  // get input
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A[i];

  int res = 0;
  while(true) {
    bool exist_odd = false;
    for (int i = 0; i < N; i++) {
      if (A[i] % 2 != 0) exist_odd = true;
      else A[i] /= 2;
    }

    if (exist_odd) break;

    res++;
  }

  cout << res;
}