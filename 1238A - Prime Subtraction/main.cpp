#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve()
{
    long long x, y;
    cin >> x >> y;
    if (x - y > 1) cout << "YES\n";
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