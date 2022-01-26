#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, m, r, c;
    cin >> n >> m >> r >> c;
    vector<string> grid(n);
    for (auto &x : grid) cin >> x;

    if(grid[r-1][c-1] == 'B') {
        cout << 0 << endl;
        return;
    }

    bool b_exists = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 'B') b_exists = true;

            if ((i + 1 == r || j + 1 == c) && grid[i][j] == 'B') {
                cout << 1 << endl;
                return;
            }
        }
    }

    if (b_exists) {
        cout << 2 << endl;
    }
    else
        cout << -1 << endl;

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