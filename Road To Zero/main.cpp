#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    long long x, y, a, b;
    cin >> x >> y >> a >> b;

    if(2*a < b) cout << x*a + y*a << endl;
    else cout << min(x,y) * b + (max(x,y) - min(x,y))*a << endl;
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