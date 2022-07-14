#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    bool yes = false;
    for (int k = 0; k < n; k++) {
        vector<vector<int>> v(2, vector<int>(2));
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> v[i][j];
            }
        }
        bool symmetric = true;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                symmetric &= (v[i][j] == v[j][i]);
            }
        }
        yes |= symmetric;       
    }
    if (yes && m % 2 == 0) cout << "YES\n";
    else cout << "NO\n";
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