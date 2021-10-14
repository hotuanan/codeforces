#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    sort(v.begin(), v.end());
    int res = 0;
    for(int i = n - 1; i >= 0; i--) {
        if(v[i] <= res) break;
        res++;
    }
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