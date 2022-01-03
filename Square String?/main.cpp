#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    cin >> a;
    int l = a.length();
    if(l & 1) {
        cout << "NO\n";
        return;
    }

    for(int i = 0; i < l/2; i++) {
        if(a[i] != a[l/2 + i]) {
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