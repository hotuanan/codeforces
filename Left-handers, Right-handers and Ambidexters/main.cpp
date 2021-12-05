#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int l,r,a;
    cin >> l >> r >> a;
    int res = 2*min(l,r) + 2*min(max(l,r) - min(l,r), a) + (max(0, a - (max(l,r) - min(l,r)))/2) * 2;
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