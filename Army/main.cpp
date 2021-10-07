#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> d(n - 1);
    for(auto &x : d) {
        cin >> x;
    }
    int a, b;
    cin >> a >> b;

    int res = 0;
    int l = b - a;
    for(int i = a - 1; i < a - 1 + l; i++) {
        res += d[i];
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