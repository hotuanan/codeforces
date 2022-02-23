#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 0; i < n; i++) cin >> v[i];
    v[n] = 90;

    int res = 0;
    int prev = 0;
    for (int i = 0; i < n + 1; i++) {
        if(v[i] - prev > 15) {
            res += 15; 
            break;
        }
        res = v[i];
        prev = v[i];
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