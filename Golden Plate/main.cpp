#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int w, h, k;
    cin >> w >> h >> k;
    int res = 0;
    for(int i = 0; i < k; i++) {
        res += 2*(h-1) + 2*(w-1);
        w -= 4;
        h -= 4;
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