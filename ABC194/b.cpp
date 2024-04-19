#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> A(n);
  vector<int> B(n);
  int a,b;
  int result = 0;
  for (int i = 0; i < n; i++) {
    cin>>A[i]>>B[i];
  }
  result = A[0] + B[0];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int temp;
      if (i == j) {
        temp = A[i] + B[j];
      } else {
        temp = max(A[i], B[j]);
      }
      if (result > temp) {
        result = temp;
      }
    }
  }
  cout<<result<<endl;
}

