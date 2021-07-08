#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int odd = 0;
    for(int i = 0; i < 2*n; i++) {
        int tmp;
        cin >> tmp;
        if(tmp & 1) odd++;
    }
    if(odd == n) cout << "YES\n";
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