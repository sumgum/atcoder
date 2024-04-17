#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k ;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> b;
    for(int i = 0; i < n; i++){
        if(a[i] % k == 0) b.push_back(a[i] / k);
    }
    for(int i = 0; i < b.size(); i++) cout<<b[i] << " ";
    cout << endl;
}
