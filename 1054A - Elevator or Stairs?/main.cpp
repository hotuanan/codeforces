#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int x, y, el_curr, t_stair, t_el, t_door;
    cin >> x >> y >> el_curr >> t_stair >> t_el >> t_door;
    int go_by_stairs = abs(x - y) * t_stair; // 30590
    int go_by_el = abs(el_curr - x) * t_el + 2*t_door + abs(x - y) * t_el + t_door; //
    if (go_by_el <= go_by_stairs) cout << "YES\n";
    else cout << "NO\n"; 
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