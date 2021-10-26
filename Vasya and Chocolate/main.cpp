#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    long long s, a, b, c;
    cin >> s >> a >> b >> c;
    long long res = b*(s/(a*c)) + s/c;
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