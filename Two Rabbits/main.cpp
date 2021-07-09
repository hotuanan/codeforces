#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int x, y, a, b;
    cin >> x >> y >> a >> b;

    if( (y - x) % (a + b) != 0) cout << -1 << endl;
    else cout << (y - x)/(a + b) << endl;
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