#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, x, a, b;
    cin >> n >> x >> a >> b;
    cout << min(n - 1, abs(a - b) + x) << endl;
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