#include<bits/stdc++.h>
#include <iostream>
#include <regex>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    string s;
    cin >> n >> s;
    vector<int> mx(26);
    int l = 0;
    while (l < n) {
        int r = l + 1;
        while (r < n and s[l] == s[r]) ++r;
        int c = s[l] - 'a';
        mx[c] = max(mx[c], r - l);
        l = r;
    }
    int ans = 0;
    for (int i = 0; i < 26; i++) {
        ans += mx[i];
    }
    cout << ans << endl;
}
