#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;

    int last = v[n - 1];
    int res = 0;
    for(int i = n - 2; i >= 0; i--) {
        if(v[i] != last) {
            res = i + 1;
            break;
        }
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