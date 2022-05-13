#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve() 
{
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (auto &x : v) cin >> x;

    sort(v.begin(), v.end());

    int ans = v[m - 1];
    for (int i = 0; i < m - n + 1; i++) {
        ans = min(ans, v[i + n - 1] - v[i]);
    }
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