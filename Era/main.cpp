#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    int res = 0;
    for(int i = 0; i < n; i++) {
        res = max(v[i] - (i + 1), res);
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