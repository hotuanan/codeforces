#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve() 
{
    int n, m;
    cin >> n >> m;
    if (min(n, m) & 1) cout << "Akshat\n"; 
    else cout << "Malvika\n";
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