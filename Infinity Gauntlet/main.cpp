#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    unordered_map<string, string> d = {
        { "purple", "Power" },
        { "green", "Time" },
        { "blue", "Space" },
        { "orange", "Soul" },
        { "red", "Reality" },
        { "yellow", "Mind" }
    };

    for(int i = 0; i < n; i++) {
        string in;
        cin >> in;
        d.erase(in);
    }
    cout << d.size() << endl;
    for(auto key : d) cout << key.second << endl;
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