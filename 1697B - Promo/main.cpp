#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int n, q;
    cin >> n >> q;

    vector<long long> v(n + 1);
    v[0] = 0;
    for (int i = 1; i < n + 1; i++) cin >> v[i];
    sort(v.begin(), v.end());
    for (int i = 1; i < n + 1; i++) {
        v[i] = v[i-1] + v[i];
    }

    for (int k = 0; k < q; k++) {
        int x, y;
        cin >> x >> y;

        long long s = v[n - x + y] - v[n - x];
        cout << s << endl;

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
