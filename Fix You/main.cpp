#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, m;
    cin >> n >> m;
    int res = 0;
    string a;
    for(int i = 0; i < n - 1; i++) {
        cin >> a;
        res += a[m - 1] == 'R';
    }
    cin >> a;
    for(auto c : a) res += c == 'D';
    cout << res << endl;
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