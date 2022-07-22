#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int l = max(3*a/10, a - (a/250)*c);
    int m = max(3*b/10, b - (b/250)*d);
    if (l > m) cout << "Misha\n";
    else if (l < m) cout << "Vasya\n";
    else cout << "Tie\n";
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
