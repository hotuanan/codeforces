#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, m, sx, sy, fx, fy;
    cin >> n >> m >> sx >> sy >> fx >> fy;
    int a;
    int b;
    if(sx <= fx) a = fx - sx;
    else a = 2 * n - fx - sx;
    if(sy <= fy) b = fy - sy;
    else b = 2 * m - fy - sy;
    cout << min(a, b) << endl;
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