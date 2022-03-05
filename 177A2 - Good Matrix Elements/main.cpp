#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<vector<int>> v;
    int res = 0;

    for (int i = 0; i < n; i++) {
        vector<int> a(n);
        for (auto &x : a) cin >> x;
        v.push_back(a);
    }

    for (int i = 0; i < n; i++) {
        res += v[i][i];
        res += v[n - 1 - i][i];
        res += v[(n - 1) / 2][i];
        res += v[i][(n - 1) / 2];
    }
    res -= 3 * v[(n - 1)/2][(n - 1)/2];
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