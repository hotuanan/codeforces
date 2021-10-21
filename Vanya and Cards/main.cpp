#include <bits/stdc++.h>
using namespace std;
    
void solve() 
{
    int n, x;
    cin >> n >> x;
    int s = 0;
    for(int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        s += tmp;
    }
    s = abs(s);
    int res = 0;
    res += (s + x - 1)/ x;
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