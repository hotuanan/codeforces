#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<vector<int>> grid;
    for (int i = 0; i < n; i++) {
        vector<int> row(n);
        for (auto &x : row) cin >> x;
        grid.push_back(row);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] != 1) {
                unordered_set<int> comps;
                bool found = false;
                for (int k = 0; k < n; k++) {
                    comps.insert(grid[i][j] - grid[i][k]);
                }

                for (int k = 0; k < n; k++) {
                    if (comps.find(grid[k][j]) != comps.end()) {
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "No\n";
                    return;
                }
            }
        }
    }
    cout << "Yes\n";
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