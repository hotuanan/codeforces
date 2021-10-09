#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n,m;
    cin >> n >> m;
    unordered_set<int> s;
    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        for(int j = 0; j < t; j++) {
            int b;
            cin >> b;
            s.insert(b);
        }
    }
    if(s.size() == m) cout << "YES\n";
    else cout << "NO\n";
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