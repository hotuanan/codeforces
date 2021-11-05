#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    string name;
    int a, b;
    bool res = false;
    while(n--) {
        cin >> name >> a >> b;
        if(a >= 2400 && b > a) {
            res = true;
        }
    }
    if(res) cout << "YES\n";
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