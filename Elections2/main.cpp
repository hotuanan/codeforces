#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int s = 0;
    int ma = -1;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        ma = max(ma, tmp);
        s += tmp;
    }

    cout << max(1 + (2 * s) / n, ma) << endl;

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