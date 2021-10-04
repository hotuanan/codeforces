#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int l, r;
    cin >> l >> r;
    if(2 * l > r) cout << "YES\n";
    else cout << "NO\n";
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