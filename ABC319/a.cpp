#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
  string s;
  cin >> s;
  
  int score;
  if (s == "tourist") {
    score = 3858;
  } else if (s == "ksun48") {
    score = 3679;
  } else if (s == "Benq") {
    score = 3658;
  } else if (s == "Um_nik") {
    score = 3648;
  } else if (s == "apiad") {
    score = 3638;
  } else if (s == "Stonefeang") {
    score = 3630;
  } else if (s == "ecnerwala") {
    score = 3613;
  } else if (s == "mnbvmar") {
    score = 3555;
  } else if (s == "newbiedmy") {
    score = 3516;
  } else if (s == "semiexp") {
    score = 3481;
  }

  cout << score << endl;
}
