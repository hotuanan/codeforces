#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int res = -1;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        res = max(res, tmp - 25);
    }
    cout << max(0, res) << endl;
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