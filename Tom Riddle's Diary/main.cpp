#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    unordered_set<string> m;
    for(int i = 0 ; i < n; i++) {
        string a;
        cin >> a;
        if(m.find(a) != m.end()) cout << "YES\n";
        else {
            m.insert(a);
            cout << "NO\n";
        }
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