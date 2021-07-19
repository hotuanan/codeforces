#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, c;
    cin >> n >> c;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    int res = 1;
    for(int i = n - 2; i >= 0; i--) {
        if(v[i + 1] - v[i] <= c) res++;
        else break;
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