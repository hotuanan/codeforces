#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    long long p, a, b, c;
    cin >> p >> a >> b >> c;
    cout << min(((p + a - 1)/a)*a - p, min(((p + b - 1)/b) * b - p, ((p + c - 1)/c) * c - p)) << endl;
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