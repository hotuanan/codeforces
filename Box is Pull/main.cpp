#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int res = 0;
    if(x1 != x2 && y1 != y2) res += 2;
    res += abs(x1 - x2) + abs(y1 - y2);
    cout << res << endl;
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