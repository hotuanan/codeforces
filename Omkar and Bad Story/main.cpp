#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    int lo = INT_MAX;
    int hi = INT_MIN;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        lo = min(lo, v[i]);
        hi = max(hi, v[i]);
    }
    if(lo < 0) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    cout << hi + 1 << endl;
    for(int i = 0; i <= hi; i++) {
        cout << i << " ";
    }
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