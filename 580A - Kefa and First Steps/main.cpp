#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int last = 0;
    int ans = 0;
    int curr = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x >= last) {
            curr++;
        }
        else {
            ans = max(ans, curr);
            curr = 1;
        }
        last = x;
    }
    ans = max(ans, curr);
    cout << ans << endl;
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