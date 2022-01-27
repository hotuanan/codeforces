#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, m, r;
    cin >> n >> m >> r;
    
    int mi = INT_MAX;
    int ma = INT_MIN;

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        mi = min(mi, tmp);
    }
    for (int i = 0; i < m; i++) {
        int tmp;
        cin >> tmp;
        ma = max(ma, tmp);
    }
    
    if (ma < mi) cout << r << endl;
    else cout << (r / mi) * ma + (r % mi) << endl;
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