#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    int lb = n * (a - b);
    int ub = n * (a + b);

    if (ub < c - d || lb > c + d) cout << "No\n";
    else cout << "Yes\n";

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
