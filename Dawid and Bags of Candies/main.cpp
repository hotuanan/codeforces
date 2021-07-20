#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int s = 0;
    int h[4];
    for(int i = 0; i < 4; i++) {
        cin >> h[i];
        s += h[i];
    }
    if(s & 1) {
        cout << "NO\n";
        return;
    }
    sort(h, h+4);
    if(s/2 == h[0] + h[3] || s/2 == h[3]) cout << "YES\n";
    else cout << "NO\n";

    
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