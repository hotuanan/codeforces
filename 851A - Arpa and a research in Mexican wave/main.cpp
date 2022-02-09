#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, k, t;
    cin >> n >> k >> t;

    if (t <= k) cout << t << endl;
    else if (t > k && t <= n) cout << k << endl;
    else cout << n + k - t << endl;
    

    

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