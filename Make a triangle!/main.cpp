#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int h[3];
    cin >> h[0] >> h[1] >> h[2];
    sort(h, h + 3);
    if(h[0] + h[1] <= h[2]) cout << h[2] - (h[0] + h[1]) + 1 << endl;
    else cout << 0 << endl;

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