#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, d;
    cin >> n >> d;
    string a;
    cin >> a;
    int res = 0;
    for (int i = 0; i < n - 1;) {
        int next = -1;
        for (int j = i + 1; j < i + d + 1 && j < n; j++) {
            if (a[j] == '1') {
                // cout << j << endl;
                // cout << a[j] << endl;
                next = j;
            }
        }
        if (next == -1) {
            cout << -1 << endl;
            return;
        }
        res++;
        i = next;
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