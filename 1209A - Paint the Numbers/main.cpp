#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    sort(a.begin(), a.end());

    unordered_set<int> deleted; 
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (deleted.count(a[i])) continue;
        res++;
        deleted.insert(a[i]);
        for (int j = i + 1; j < n; j++) {
            if (a[j] % a[i] == 0) {
                deleted.insert(a[j]);
            }
        }
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