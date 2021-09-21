#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int a, b;
    cin >> a >> b;
    int diff = max(a,b) - min(a,b);
    int res = 0;
    res += diff/5;
    diff = diff % 5;
    res += diff/2;
    diff = diff % 2;
    res += diff/1;
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