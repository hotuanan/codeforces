#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int c, d;
    cin >> c >> d;
    if(c == 0 && d == 0) {
        cout << 0 << endl;
        return;
    }
    if(abs(c - d) & 1) {
        cout << -1 << endl;
        return;
    }
    if(c == d) {
        cout << 1 << endl;
        return;
    }
    cout << 2 << endl;
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