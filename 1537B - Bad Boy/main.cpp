#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    int f_x, f_y, s_x, s_y;
    int d = max(x - 1 + y - 1, max(n - x + m - y, max(n - x + y - 1, n - y + x - 1)));
    if (d == x - 1 + y - 1 || d == n - x + m - y) {
        f_x = 1;
        f_y = 1;
        s_x = n;
        s_y = m;
    }
    else {
        f_x = 1;
        f_y = 1;
        s_x = n;
        s_y = m;
    }
    cout << f_x << " " << f_y << " " << s_x << " " << s_y << endl;

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
