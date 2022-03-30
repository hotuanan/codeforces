#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> parties(n);
    int m = 0;

    for (int i = 0; i < n; i++) {
        cin >> parties[i];
        m += parties[i];
    }
    int coal_size = parties[0];
    unordered_set<int> coalition;
    for (int i = 1; i < n; i++) {
        if (2 * parties[i] <= parties[0]) {
            coalition.insert(i + 1);
            coal_size += parties[i];
        }
    }

    if (coal_size <= m/2) {
        cout << 0 << endl;
        return;
    }
    
    coalition.insert(1);
    cout << coalition.size() << endl;
    for (auto i : coalition) {
        cout << i << " ";
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