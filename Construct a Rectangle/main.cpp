#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int h[3];
    cin >> h[0] >> h[1] >> h[2];
    sort(h, h + 3);
    if(h[0] == h[1]) {
        if(h[2] % 2 == 0) {
            cout << "YES\n";
            return;
        }
    }
    else if (h[1] == h[2]) {
        if(h[0] % 2 == 0) {
            cout << "YES\n";
            return;
        }
    }
    else {
        if(h[0] + h[1] == h[2]) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";

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