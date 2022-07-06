#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    long long x, a, y, b;
    cin >> x >> a >> y >> b;
    
    int mi = min(a,b);
    a -= mi;
    b -= mi; 
    if (a > 6) cout << ">\n";
    else if (b > 6) cout << "<\n";
    else {
        x *= pow(10, a);
        y *= pow(10, b);
        if (x > y) cout << ">\n";
        else if (y > x) cout << "<\n";
        else cout << "=\n";
    }
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
