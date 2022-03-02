#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;

    int s[100] = {0};
    for (int q = 0; q < n; q++) {
        int r;
        cin >> r;

        for (int i = 0; i < r; i++) {
            int x;
            cin >> x;
            s[x] += 1;
            if (s[x] == n) cout << x << " ";
        }
    }
    cout << endl;
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