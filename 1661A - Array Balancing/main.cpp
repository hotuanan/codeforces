#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
    for (int i = 1; i < n; i++) {
        if (abs(a[i - 1] - a[i]) + abs(b[i - 1] - b[i]) > abs(a[i - 1] - b[i]) + abs(b[i - 1] - a[i])) {
            swap(a[i], b[i]);
        }
    }
    long long ans = 0;
    for (int i = 0; i < n - 1; i++) {
        ans += abs(a[i] - a[i + 1]) + abs(b[i] - b[i + 1]);
    }
    cout << ans << endl;
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