#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int x, y;
    cin >> x >> y;
    cout << 2 * min(x, y) + max((max(x, y) - min(x, y) - 1) * 2 + 1, 0) << endl;

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