#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int n, k;
    cin >> n >> k;
    vector<int> f(n);
    vector<int> t(n);
    for (int i = 0; i < n; i++) 
        cin >> f[i] >> t[i];

    int res = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (t[i] > k) res = max(res, f[i] - (t[i] - k));
        else res = max(res, f[i]);
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
