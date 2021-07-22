#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a, b, c;
    cin >> a >> b >> c;
    int n = a.length();
    for(int i = 0; i < n; i++) {
        if(!((a[i] == b[i] && b[i] == c[i]) || (a[i] == c[i] || b[i] == c[i]))) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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