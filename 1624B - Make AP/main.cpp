#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int a, b, c;
    cin >> a >> b >> c;
    bool found = false;
    int x = (2*b - c)/a;
    if (b - x*a == c - b && x > 0) {
        found = true;
    }
    x = (c + a)/(2*b);
    if (x*b - a == c - x*b && x > 0) {
        found = true;
    }

    x = (2*b - a)/c;
    if (b - a == x*c - b && x > 0) {
        found = true;
    }

    if (found) cout << "YES\n";
    else cout << "NO\n";
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
