#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    cin >> a;
    int ns = 0;
    for(auto c : a) {
        if(c == 'N') ns++;
    }
    if(ns == 1) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
    }

}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
        solve();
}