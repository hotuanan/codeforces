#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int h[100001] = {0};
    int curr = 0;
    int res = 0;
    for(int i = 0; i < 2 * n; i++) {
        int tmp;
        cin >> tmp;
        if(!h[tmp]) {
            h[tmp] = 1;
            curr += 1;
        }
        else curr -= 1;
        res = max(res, curr);
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