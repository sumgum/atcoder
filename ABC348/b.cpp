#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> X(N);
  vector<int> Y(N);

  for (int i = 0; i < N; i++) {
    cin >> X.at(i);
    cin >> Y.at(i);
  }

  for (int i = 0; i < N; i++) {
    int tempResult = i;
    int tempPow = 0;
    for (int j = 0; j < N; j++) {
      int Pow = pow(X.at(i)-X.at(j), 2) + pow(Y.at(i)-Y.at(j), 2);
      if (Pow > tempPow) {
        tempPow = Pow;
        tempResult = j+1;
      }
    }
    cout << tempResult << endl;
  }
}