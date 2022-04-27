#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    cin >> a;
    if (a.length() < 2) {
        cout << "NO\n";
        return;
    }
    if (a[0] != a[1] || a[a.length() - 1] != a[a.length() - 2]) {
        cout << "NO\n";
        return;
    }

    for (int i = 1; i < a.length() - 1; i++) {
        if (a[i] != a[i - 1] && a[i] != a[i + 1]) {
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