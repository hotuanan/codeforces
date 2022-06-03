#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int s;
    cin >> s;
    int res = 0;

    while (s >= 10) {
        res += s - (s % 10);
        s = s / 10 + s % 10;
    }
    res += s;
    cout << res << endl;
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
