#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    int mi = INT_MAX;
    int ma = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mi = min(v[i], mi);
        ma = max(v[i], ma);
    }
    if (mi == ma) {
        cout << -1 << endl;
        return;
    }

    int res = -1;
    for (int i = 0; i < n; i++) {
        if (v[i] != ma) continue;
        if (i > 0 && v[i - 1] != ma) res = i + 1;
        if (i < n - 1 && v[i + 1] != ma) res = i + 1;
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
