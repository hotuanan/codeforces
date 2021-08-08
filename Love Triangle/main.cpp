#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    for(int i = 0; i < n; i++) {
        int a = v[i];
        int b = v[a - 1];
        int c = v[b - 1];
        // cout << a << " " << b << " " << c << endl;
        if(a == v[c - 1]) {
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
    // int t;
    // cin >> t;
    // while(t--)
        solve();
}