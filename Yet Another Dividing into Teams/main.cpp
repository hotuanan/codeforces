#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;

    unordered_set<int> c;
    c.insert(v[0]);
    for(int i = 1; i < n; i++) {
        if(c.find(v[i] - 1) == c.end() && c.find(v[i] + 1) == c.end()) c.insert(v[i]);
        else {
            cout << 2 << endl;
            return;
        }
    }

    cout << 1 << endl;

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