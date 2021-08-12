#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int mi = 1000000;
    int mi_i;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        mi = min(v[i], mi);
        if(mi == v[i]) mi_i = i;
    }
    
    int res = 0;
    for(int i = 0 ; i < n; i++) {
        if(i == mi_i) continue;
        res += (k - v[i])/mi;
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