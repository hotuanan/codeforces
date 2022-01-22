#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    unordered_map<int, int> m;
    int s = 0;
    for (int i = 0; i < 5; i++) {
        int tmp;
        cin >> tmp;
        m[tmp] += 1;
        s += tmp;
    }

    int res = s;
    for (auto& [k, v] : m) {
        if (v == 1) continue;
        res = min(res, s - min(3, v)*k);
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