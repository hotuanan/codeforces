#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int x, y;
    cin >> x >> y;

    if (x == 0 && y == 0) {
        cout << 0 << endl;
        return;
    }
    if (sqrt(x * x + y * y) == floor(sqrt(x * x + y * y))) {
        cout << 1 << endl;
        return;
    }
    cout << 2 << endl;
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