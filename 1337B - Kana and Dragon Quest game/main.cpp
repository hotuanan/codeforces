#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int x, n, m;
    cin >> x >> n >> m;

    while (n > 0 && x > 20) {
        x = x/2 + 10;
        n--;
    }
    
    while (m > 0 && x > 0) {
        x -= 10;
        m--;
    }
    if (x <= 0) cout << "YES\n";
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
