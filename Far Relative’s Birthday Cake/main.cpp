#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<vector<char>> grid(n, vector<char> (n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }


    int res = 0;

    for (int i = 0; i < n; i++) {
        int chocos_rows = 0;
        int chocos_cols = 0; // memorywise cache hit inefficient 
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 'C') chocos_rows++;
            if (grid[j][i] == 'C') chocos_cols++;

        }
        res += chocos_rows * (chocos_rows - 1) / 2;
        res += chocos_cols * (chocos_cols - 1) / 2;
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