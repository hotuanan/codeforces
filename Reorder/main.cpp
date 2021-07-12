#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, m;
    cin >> n >> m;
    int tmp;
    int s = 0;
    for(int i = 0; i < n; i++) {
        cin >> tmp;
        s += tmp;
    }
    if(s == m) cout << "YES\n";
    else cout << "NO\n";
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