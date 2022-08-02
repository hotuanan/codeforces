#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int tim;
    int h[3];
    cin >> tim >> h[0] >> h[1] >> h[2];
    int ahead = 0;
    for (int i = 2; i >= 0; i--) {
        if (tim < h[i]) ahead++;
    }
    cout << ahead << endl;
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
