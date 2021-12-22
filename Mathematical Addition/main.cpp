#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    long long u, v;
    cin >> u >> v;
    cout << - u*u << " " << v*v << endl;
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