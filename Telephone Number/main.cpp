#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    string a;
    cin >> n >> a;
    for(int i = 0; i < n - 10; i++) {
        if(a[i] == '8' && n - i >= 11) {
            cout << "YES\n";
            return;
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