#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve() 
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (auto &x : v) cin >> x;
    sort(v.begin(), v.end());
    int res = 0;
    for (int i = 0; i < m; i++) {
        if (v[i] >= 0) break;
        res += -v[i];
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