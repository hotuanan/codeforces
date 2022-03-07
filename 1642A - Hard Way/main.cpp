#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    vector<pair<int, int>> ps(3);
    for (auto &p : ps) {
        int x, y;
        cin >> x >> y;
        p = pair<int, int>(y, x);
    }
    sort(ps.begin(), ps.end());
    if (ps[2].first == ps[1].first) {
        cout << abs(ps[2].second - ps[1].second) << endl;
    }
    else {
        cout << 0 << endl;
    }
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