#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    long long l;
    cin >> n >> l;
    vector<long long> v(n);
    for(auto &x : v) cin >> x;
    sort(v.begin(), v.end());

    long long res = INT_MIN;

    for(int i = 0; i < n - 1; i++) {
        res = max(res, v[i + 1] - v[i]);
    }
    long long best = max(v[0], l - v[n - 1]);
    double res_dist = res / 2.0;
    cout.precision(10);
    if( res_dist > best) cout << res_dist << endl;
    else cout << best << endl;
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