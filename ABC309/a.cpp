#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  string result = "No";
  if (a % 3 == 1) {
    if (b == a + 1) result = "Yes";
  }
  if (a % 3 == 2) {
    if (b == a + 1 || b == a - 1) result = "Yes";
  }
  if (a % 3 == 0) {
    if (b == a - 1) result = "Yes";
  }

  cout << result << endl;
}
