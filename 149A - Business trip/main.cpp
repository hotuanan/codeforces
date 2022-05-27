#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int k;
    cin >> k;
    int h[12];
    for(int i = 0; i < 12; i++)
        cin >> h[i];
    int ans = 0;
    sort(h, h + 12);
    for(int i = 11; i >= 0; i--)
    {
        if (k > 0) {
            ans++;
            k -= h[i];
        }
        else break;
    }
    if (k > 0) {
        cout << "-1\n";
        return;
    }
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
