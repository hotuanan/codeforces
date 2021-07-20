#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, k1, k2, w, b;
    cin >> n >> k1 >> k2 >> w >> b;
    int whites = k1 + k2;
    int blacks = 2*n - whites;
    if(whites >= 2 * w && blacks >= 2 * b) cout << "YES\n";
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