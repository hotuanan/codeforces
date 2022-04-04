#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, m, k;
    cin >> n >> m >> k;
    int lane = (k + 2 * m - 1) / (2 * m);
    int st = 2 * m * lane - 2 * m + 1;
    int desk = 1;
    while (st != k && st + 1 != k) {
        st += 2;
        desk++;
    }

    if (k & 1) cout << lane << " " << desk << " L\n";
    else cout << lane << " " << desk << " R\n";
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