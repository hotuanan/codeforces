#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    vector<int> b(n);
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;
    for(int i = 0; i < n; i++) {
        if(a[i] + b[n - i - 1] > x) {
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
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