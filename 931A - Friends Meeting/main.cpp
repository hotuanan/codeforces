#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int a;
    int b;
    cin >> a >> b;

    int diff = abs(a - b);
    int res = (diff/2) * (diff/2 + 1);
    if (diff & 1) {
        res += (diff/2) + 1;
    }
    cout << res << endl;

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