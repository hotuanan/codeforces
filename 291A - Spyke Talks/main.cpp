#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    unordered_map<int, int> m;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x) {
            m[x]++;
        }
    }
    int pairs = 0;
    for (auto [key, value] : m) {
        if (value >= 3) {
            cout << "-1\n";
            return;
        }
        if (value == 2) {
            pairs++;
        }
    }
    cout << pairs << endl;
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