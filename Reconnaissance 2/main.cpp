#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x: v) cin >> x;
    int idx = -1;
    int mi = INT_MAX;
    for(int i = 0; i < n - 1; i++) {
        if(abs(v[i] - v[i + 1]) < mi) {
            idx = i;
            mi = abs(v[i] - v[i + 1]);
        }
    }
    if(abs(v[n - 1] - v[0]) < mi) idx = n - 1;
    cout << idx + 1 << " " << ((idx + 1) % n) + 1 << endl;
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