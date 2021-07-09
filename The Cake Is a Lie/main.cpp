#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int x, y, k;
    cin >> x >> y >> k;

    int need = (x - 1) + x*(y - 1);
    if(need == k) cout << "YES\n";
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