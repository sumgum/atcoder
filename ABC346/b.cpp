#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int w,b;
    cin >> w >> b;
    int n = w + b;
    string s = "wbwbwwbwbwbw";
    vector<char> c(12);
    for (int i = 0; i < 12; i++) {
      c[i] = s[i];
    }

    for (int i = 0; i < 12; i++) {
      int cntb = 0;
      int cntw = 0;
      for (int j = 0; j < n; j++) {
        int tempIndex = (i+j) % 12;
        char tempChar = c[tempIndex];
        if (tempChar == 'w') {
          cntw++;
        } else {
          cntb++;
        }
      }
      if (cntb == b && cntw == w) {
        cout << "Yes" << endl;
        return 0;
      }

    }

    cout << "No" << endl;
    return 0;
}
