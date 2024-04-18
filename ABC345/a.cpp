#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    // 繰り返し使用する文字数は変数にとっておく
    int n = s.size();
    // 標準入力の最初と最後の文字はループする必要なし
    if (s[0] != '<') {
      // ""でstring型、''でchar型
      cout<<"No"<<endl;
      // Noを出力した時点で処理終了
      return 0;
    }
    if (s[n-1] != '>') {
      cout<<"No"<<endl;
      return 0;
    }
    for (int i = 1; i < s.size()-1; i++) {
      if (s[i] != '=') {
        cout<<"No"<<endl;
        return 0;
      }
    }

    cout<<"Yes"<<endl;
    return 0;
}
