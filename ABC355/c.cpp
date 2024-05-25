#include<bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;

int judgeLine(int n, int a) {
  int div = a / n;
  if (a % n != 0) div++;
  return div;
}

int judgeColumn(int n, int a) {
  int result = a % n;
  if (result == 0) result = n;
  return result;
}

int main(){
  int n,m;
  cin >> n >> m;
  vector<int> h(n,0);
  vector<int> w(n,0);
  int naname = 0;
  int reverseNaname = 0;

  rep(i,m) {
    int a = 0;
    cin >> a;
    int line = judgeLine(n,a);
    int column = judgeColumn(n,a);
    // todo debug用
    // cout << "line: " << line << "; column: " << column << endl;
    ++h[line-1];
    ++w[column-1];
    if (h[line-1] == n || w[column-1] == n) {
      cout << i+1 << endl;;
      return 0;
    }

    if (column == line) {
      ++naname;
    }
    if (column == n - line + 1) {
      ++reverseNaname;
    }
    if (naname == n || reverseNaname == n) {
      cout << i+1 << endl;;
      return 0;
    }
  }

  cout << -1 << endl;
}
