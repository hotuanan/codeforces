#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, m;
    cin >> n >> m;
    int res = 0;
    for(int line = 0; line < n; line++) {
        for(int i = 1; i <= 2*m ; i += 2) {
            int first, second;
            cin >> first >> second;
            res += (first || second);
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