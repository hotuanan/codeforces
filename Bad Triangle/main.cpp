#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;

    if(v[0] + v[1] > v[n-1]) 
       cout << -1 << endl; 
    else
        cout << "1 2 " << n << endl;
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