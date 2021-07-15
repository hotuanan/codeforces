#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int a_x, a_y, b_x, b_y, f_x, f_y;
    cin >> a_x >> a_y >> b_x >> b_y >> f_x >> f_y;
    int res = abs(a_x - b_x) + abs(a_y - b_y);
    if((a_x == b_x && b_x == f_x && f_y < max(a_y, b_y) && f_y > min(a_y, b_y)) || 
        (a_y == b_y && b_y == f_y && f_x < max(a_x, b_x) && f_x > min(a_x, b_x)))
        res += 2;
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