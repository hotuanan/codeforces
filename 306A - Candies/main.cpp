#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, m;
    cin >> n >> m;
    int extra = n % m;
    for (int i = 0; i < m; i++) {
        cout << n / m + (extra > 0) << " ";
        extra = max(extra - 1, 0);
    }
    cout << endl;
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