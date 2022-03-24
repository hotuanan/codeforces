#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, m;
    cin >> n >> m;
    vector<int> k(n);
    vector<int> l(m);
    for (auto &x : k) cin >> x;
    for (auto &x : l) cin >> x;

    int res = 0;
    int curr_bill = 0;
    for (int i = 0; i < n; i++) {
        if (k[i] <= l[curr_bill]) {
            res++;
            curr_bill++;
        }
        if (curr_bill > m - 1) break;
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