#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, m;
    cin >> n >> m;
    
    if ((n == 1 || m == 1) && (abs(n - m) > 1)) {
        cout << "-1\n";
        return;
    }
    if (n == m) {
        cout << 2 * n - 2 << endl;
        return;
    }

    int ans = 2*min(n, m) - 2;
    ans += (max(n, m) - min(n, m))/2 * 4 + ((max(n, m) - min(n, m)) & 1);
    cout << ans << endl;




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