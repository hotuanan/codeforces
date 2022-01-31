#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, m;
    cin >> n >> m;
    char last_row = 'x';
    for (int i = 0; i < n; i++) {
        string row;
        cin >> row;
        char color = row[0];
        if (color == last_row) {
            cout << "NO\n";
            return;
        }
        last_row = color;
        for (int j = 1; j < m; j++) {
            if (row[j] != color) {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
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