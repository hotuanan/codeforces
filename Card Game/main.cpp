#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, k1, k2;
    cin >> n >> k1 >> k2;
    int tmp;
    int m = 0;
    for(int i = 0; i < k1; i++) {
        cin >> tmp;
        m = max(tmp, m);
    }
    for(int i = 0; i < k2; i++) cin >> tmp;
    if(m == n) cout << "YES\n";
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