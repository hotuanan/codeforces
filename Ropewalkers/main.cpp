#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int h[3] = {0};
    int d;
    cin >> h[0] >> h[1] >> h[2] >> d;
    sort(h, h + 3);
    int res = 0;
    if(h[1] - h[0] < d) res += d - (h[1] - h[0]);
    if(h[2] - h[1] < d) res += d - (h[2] - h[1]);
    cout << res << endl;
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