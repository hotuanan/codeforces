#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    int negs = 0;
    int zeros = 0;
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == 0) {
            ans++;
            zeros++;
        }
        else if (v[i] < 0) {
            negs++;
            ans += - v[i] - 1;
        }
        else {
            ans += v[i] - 1;
        }
    }

    if (negs % 2 == 0 || zeros > 0) {
        cout << ans << endl;
    }
    else {
        cout << ans + 2 << endl;
    }
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
