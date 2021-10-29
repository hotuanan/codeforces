#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int res = 0;
    if(e >= f) {
        int first = min(a, d);
        res += first * e + min(d - first, min(b, c)) * f;
    }
    else {
        int second = min(b, min(c, d));
        res += second * f + min(a, d - second) * e;   
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