#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<long long> v(n);
    for(auto &x : v) cin >> x;
    long long res = 0;
    for(int i = 0; i < n - 1; i++) {
        res = max(res, v[i] * v[i + 1]);
    }
    cout << res << endl;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
        solve();
}