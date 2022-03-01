#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    sort(v.begin(), v.end());
    cout << v[b] - v[b - 1] << endl;
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