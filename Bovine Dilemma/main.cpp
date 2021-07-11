#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;

    unordered_set<int> res;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
                res.insert(v[j] - v[i]);
        }
    }
    cout << endl;
    cout << res.size() << endl;
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