#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int y, b, r;
    cin >> y >> b >> r;
    int m = min(y, min(b, r));
    if(m == r) cout << 3 * r - 3 << endl;
    else if(m == b) cout << 3 * b << endl;
    else {
        //r - y = 1, r - y = 2
        //b - y = 1
        if(b - y > 1) {
            if(r - y > 1) cout << 3 * y + 3 << endl;
            else cout << 3 * r - 3 << endl;
        }
        else {
            if(r - y > 1) cout << 3 * y + 3 << endl;
            else cout << 3 * r - 3 << endl;
        }
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