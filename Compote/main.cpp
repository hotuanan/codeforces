#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int a, b, c;
    cin >> a >> b >> c;
    b = b / 2;
    c = c / 4;
    cout << min(7 * a, min(7 * b, 7 * c)) << endl;

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