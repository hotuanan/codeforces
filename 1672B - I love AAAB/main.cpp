#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    cin >> a;

    if (a[a.length() - 1] == 'A') {
        cout << "NO\n";
        return;
    }

    int s = 0;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == 'A') s++;
        else s--;
        if (s < 0) {
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