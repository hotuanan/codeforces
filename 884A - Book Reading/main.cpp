#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    for (int i = 0; i < n + 1; i++) {
        if (t <= 0) {
            cout << i << endl;
            return;
        }
        t -= 86400 - v[i];
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