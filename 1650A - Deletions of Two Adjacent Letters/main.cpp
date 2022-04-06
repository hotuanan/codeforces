#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    char b;
    cin >> a >> b;

    for (int i = 0; i < a.length(); i++) {
        if (a[i] == b) {
            if ((i + 1) & 1) {
                cout << "YES\n";
                return;
            }
        }
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