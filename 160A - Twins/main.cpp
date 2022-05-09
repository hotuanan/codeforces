#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    int s = 0;
    for (auto &x : v) {
        cin >> x;
        s += x;
    }
    sort(v.rbegin(), v.rend());
    int me = 0;
    for (int i = 0; i < n; i++) {
        me += v[i];
        s -= v[i];
        if (me > s) {
            cout << i + 1 << endl;
            return;
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