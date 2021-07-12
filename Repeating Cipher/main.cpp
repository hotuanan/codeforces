#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    string res = "";

    int idx = 0;
    for(int i = 1; i < n + 1 && idx < n; i++) {
        res += a[idx];
        idx += i;
    }
    cout << res << endl;
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