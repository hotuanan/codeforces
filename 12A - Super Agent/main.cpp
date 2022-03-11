#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    vector<string> v(3);
    cin >> v[0] >> v[1] >> v[2];

    if (v[0][0] != v[2][2] || v[0][1] != v[2][1] || v[0][2] != v[2][0] || v[1][0] != v[1][2]) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
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