#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> v1(n);
    vector<int> v2(n);

    for(auto &x : v1) cin >> x;
    for(auto &x : v2) cin >> x;
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    for(auto x : v1) cout << x << " ";
    cout << endl;
    for(auto x : v2) cout << x << " ";
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