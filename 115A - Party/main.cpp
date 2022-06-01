#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] != -1) v[i]--;
    }

    int res = 0;
    unordered_set<int> idxs_used;
    for (int i = 0; i < n; i++) {
        if (idxs_used.find(i) != idxs_used.end()) continue;
        int depth = 1;
        int curr = i;
        while (v[curr] != -1) {
            idxs_used.insert(curr);
            curr = v[curr];
            depth++;
        }
        res = max(res, depth);
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
