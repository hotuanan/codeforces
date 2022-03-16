#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int res = 2 + 2*n;
    for(int i = 1; i <= n/2; i++) {
        if (i * (n/i) == n) {
            res = min(res, 2*i + 2 * (n/i));
        }
    }
    cout << res << endl;
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