#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, k, x;
    cin >> n >> k >> x;

    vector<int> v(n);
    for (auto &c : v) cin >> c;
    int res = k * x;
    for (int i = 0; i < n - k; i++) {
        res += v[i];
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