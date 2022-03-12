#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, h, r;
    cin >> n >> h >> r;
    vector<int> v(n, h);

    for (int i = 0; i < r; i++) {
        int from, to, ma;
        cin >> from >> to >> ma;
        for (int j = from - 1; j < to; j++) {
            v[j] = min(v[j], ma);
        }
    }
    int res = 0;
    for (auto x : v) res += x*x;
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