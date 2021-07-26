#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(auto &x : v) cin >> x;

    int lo = 0;
    int hi = n - 1;
    int res = 0;
    while((v[lo] <= k || v[hi] <= k) && lo <= hi) {
        res++;
        if(v[lo] <= k) lo++;
        else hi--;
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