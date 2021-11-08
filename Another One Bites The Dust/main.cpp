#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    long long a, b, ab;
    cin >> a >> b >> ab;
    if(abs(a - b) > 1) cout << 2*min(a, b) + 1 + ab*2 << endl;
    else cout << a + b + ab*2 << endl;
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