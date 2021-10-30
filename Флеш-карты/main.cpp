#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    sort(v.rbegin(), v.rend());
    int r = 0;
    for(auto x : v) {
        m -= x;
        r++;
        if(m <= 0) break;
    }
    cout << r << endl;
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