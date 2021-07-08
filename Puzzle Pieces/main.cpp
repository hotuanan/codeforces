#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, m;
    cin >> n >> m;
    if(n == 1 || m == 1) {
        cout << "YES\n";
        return;
    }

    if(n == 2 && m == 2) {
        cout << "YES\n";
        return;
    }

    cout << "NO\n";

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