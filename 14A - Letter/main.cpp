#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for (auto &x : v) cin >> x;

    int top = -1;
    int bot = -1;
    int left = m;
    int right = -1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v[i][j] == '*') {
                top = i;
                break;
            }
        }
        if (top != -1) break;
    }
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < m; j++) {
            if (v[i][j] == '*') {
                bot = i;
                break;
            }
        }
        if (bot != -1) break;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v[i][j] == '*') {
                left = min(left, j);
                right = max(right, j);
            }
        }
    }

    for (int i = top; i <= bot; i++) {
        for (int j = left; j <= right; j++) {
            cout << v[i][j];
        }
        cout << endl;
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