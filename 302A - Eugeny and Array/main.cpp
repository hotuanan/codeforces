#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    int pos = 0;
    int neg = 0; 
    for (auto &x : v) {
        cin >> x;
        if (x == 1) pos++;
        else neg++;
    }


    for(int q = 0; q < m; q++) {
        int l, r;
        cin >> l >> r;
        int interval_l = r - l + 1;
        if (interval_l & 1) {
            cout << "0\n";
            continue;
        }

        if (interval_l/2 <= neg && interval_l/2 <= pos) {
            cout << "1\n";
        }
        else {
            cout << "0\n";
        }

    }
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