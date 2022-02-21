#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    for (int i = 0; i < n - 1; i++) {
        if (v[i] > v[i + 1]) {
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