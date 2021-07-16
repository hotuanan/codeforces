#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int b, p, f;
    cin >> b >> p >> f;
    int h, c;
    cin >> h >> c;
    int burgers = b/2;
    if(h > c) {
        if(burgers > p) cout << p * h + min(burgers - p, f) * c << endl;
        else cout << burgers * h << endl;
    }
    else {
        if(burgers > f) cout << f * c + min(burgers - f, p) * h << endl;
        else cout << burgers * c << endl;
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