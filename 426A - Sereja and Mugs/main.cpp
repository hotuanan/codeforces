#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, s;
    cin >> n >> s;
    int sum = 0;
    int ma = -1;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        sum += t;
        ma = max(t, ma);
    }

    if (s >= sum - ma) cout << "YES\n";
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