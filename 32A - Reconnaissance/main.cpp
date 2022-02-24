#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, d;
    cin >> n >> d;
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    int res = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (abs(v[i] - v[j]) <= d) {
                res++;
            }
        }
    }
    cout << 2 * res << endl;
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