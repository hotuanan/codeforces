#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int x, y, z;
    cin >> x >> y >> z;
    if(z == 0) {
        if(x == y) cout << "0\n";
        else if(x > y) cout << "+\n";
        else cout << "-\n";
    }
    else {
        if(x > y + z) cout << "+\n";
        else if(y > x + z) cout << "-\n";
        else cout << "?\n";
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