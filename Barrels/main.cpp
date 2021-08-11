#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    sort(v.begin(), v.end());
    int curr_i = n - 2;
    long long s = v[n-1];
    while(k > 0 && curr_i >= 0) {
        s += v[curr_i];
        curr_i--;
        k--;
    }
    cout << s << endl;
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