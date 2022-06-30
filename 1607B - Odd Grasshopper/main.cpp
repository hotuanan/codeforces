#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    long long x, n; 
    cin >> x >> n;

    long long d;
    if (n % 4 == 1) d = -n;
    else if (n % 4 == 2) d = 1;
    else if (n % 4 == 3) d = n + 1;
    else d = 0;

    if (x & 1) cout << x - d << endl;
    else cout << x + d << endl;


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
