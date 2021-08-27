#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int a, b, c;
    cin >> a >> b >> c;
    int diff = max(a,b) - min(a,b);
    int n = diff * 2;
    if(a > n || b > n || c > n) {
        cout << "-1" << endl;
        return;
    }
    if(c + diff > n) cout << (c + diff) % n << endl;
    else cout << c + diff << endl;

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