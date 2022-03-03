#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;

    vector<string> v(n);
    for (auto &x : v) cin >> x;

    int res = 0;
    int l = v[0].length();
    for (int i = 0; i < l; i++) {
        auto curr = v[0][i];
        for (auto word : v) {
            if (word[i] != curr) {
                cout << res << endl;
                return;
            }
        }
        res++;
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