#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int l_zeros = 0;
    int r_zeros = 0;    
    int res = 0;
    for(int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        if(l == 0) l_zeros++;
        if(r == 0) r_zeros++;
    }
    if(n - l_zeros > l_zeros) res += l_zeros;
    else res += n - l_zeros;
    if(n - r_zeros > r_zeros) res += r_zeros;
    else res += n - r_zeros;
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