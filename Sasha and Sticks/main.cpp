#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    long long n, k;
    cin >> n >> k;
    if((n / k) & 1) cout << "YES\n";
    else cout << "NO\n";
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t;
    // cin >> t;
    // while(t--)
        solve();
}