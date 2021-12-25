#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> v(n);
    for(auto &x : v) cin >> x;

    int res = INT_MAX;
    for(int i = 1; i <= n; i++) {
        if(v[i - 1] == 0 || v[i - 1] > k) continue; 
        res = min(res, abs(m - i) * 10);
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