#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int m, d;
    cin >> m >> d;
    int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cout << (a[m] + d - 1 + 6) / 7 << endl;

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