#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int a, b;
    cin >> a >> b;
    if (a == 0) {
        cout << 1 << endl;
        return;
    }
    cout << 2 * b + a + 1 << endl;
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