#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int x, y;
    int i, j;
    cin >> x >> y >> i >> j;
    cout << max(abs(x - i), abs(y - j)) << endl;
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