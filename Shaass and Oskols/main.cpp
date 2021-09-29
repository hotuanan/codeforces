#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    int shot;
    cin >> shot;
    for(int i = 0; i < shot; i++) {
        int x, y;
        cin >> x >> y;
        if(x == 1) v[x] += v[x - 1] - y;
        else if(x == n) v[x - 2] += y - 1;
        else {
            v[x] += v[x - 1] - y;
            v[x - 2] += y - 1;
        }
        v[x - 1] = 0;
    }
    for(auto x : v) {
        cout << x << endl;
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