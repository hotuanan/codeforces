#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    long long s = 0;
    int min_odd = INT_MAX;
    for (int i = 0; i < n; i++) {
        s += v[i];
        if (v[i] & 1) min_odd = min(min_odd, v[i]);
    } 

    if (s & 1) {
        s -= min_odd;
    }
    cout << s << endl;


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
