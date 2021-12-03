#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int x, y;
    cin >> x >> y;
    if((x + y) & 1) {
        cout << "-1 -1\n";
        return;
    }
    int d = (x + y) / 2;
    if(x > d) cout << x - d << " " << y << endl;
    else cout << x << " " << y - d << endl;

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