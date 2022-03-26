#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int a_commands = 0;
    int b_commands = 0;
    int a = 0;
    int b = 0;
    for (int i = 0; i < n; i++) {
        int t, x, y;
        cin >> t >> x >> y;

        if (t == 1) {
            a += x;
            a_commands++;
        }
        else {
            b += x;
            b_commands++;
        }   
    }

    if (a >= a_commands * 5) cout << "LIVE\n";
    else cout << "DEAD\n";
    if (b >= b_commands * 5) cout << "LIVE\n";
    else cout << "DEAD\n";
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