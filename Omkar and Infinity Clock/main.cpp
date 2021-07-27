#include <bits/stdc++.h>
using namespace std;

void operation(vector<int> &v) 
{
    int m = INT_MIN;
    for(auto x : v) m = max(m, x);
    for(int i = 0; i < v.size(); i++) v[i] = m - v[i];
}

void solve() 
{
    int n;
    long long k;
    cin >> n >> k;
    vector<int> v(n);
    for(auto &x : v) cin >> x;

    operation(v);
    k--;
    if(k & 1) operation(v);
    for(auto x : v) cout << x << " ";
    cout << endl;
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