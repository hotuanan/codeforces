#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int k, n, s, p;
    cin >> k >> n >> s >> p;

    int ans = (n + s - 1) / s;
    ans *= k;
    ans = (ans + p - 1)/p;
    cout << ans << endl;
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