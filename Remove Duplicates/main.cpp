#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    vector<int> res;
    unordered_set<int> seen;
    for(int i = n - 1; i >= 0; i--) {
        if(seen.find(v[i]) == seen.end()) {
            seen.insert(v[i]);
            res.push_back(v[i]);
        }
    }
    cout << res.size() << endl;
    for(int i = res.size() - 1; i >= 0; i--) {
        cout << res[i] << " ";
    }
    cout << endl;
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