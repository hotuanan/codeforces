#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<vector<int>> m;

    for (int i = 0; i < n; i++) {
        vector<int> r(n);
        for (auto& x : r) cin >> x;
        m.push_back(r);
    }
    vector<int> r(n);
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        int col_sum = 0;
        int row_sum = 0;
        for (int j = 0; j < n; j++) {
            row_sum += m[i][j];
            col_sum += m[j][i];
        }
        r[i] = row_sum;
        c[i] = col_sum;
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (c[i] > r[j]) res++;
        }
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