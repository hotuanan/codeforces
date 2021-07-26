#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int x, y, z, a, b, c;
    cin >> x >> y >> z >> a >> b >> c;
    if(a < x) {
        cout << "NO\n";
        return;
    }
    a -= x;
    x = 0;

    if(a + b < y) {
        cout << "NO\n";
        return;
    }
    int rest = a + b + c;
    rest -= y;
    y = 0;
    if(rest < z) {
        cout << "NO\n";
        return;
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