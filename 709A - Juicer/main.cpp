#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int n, b, d;
    cin >> n >> b >> d;

    int res = 0;
    int curr_juice = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x > b) continue;

        curr_juice += x;
        if (curr_juice > d) {
            curr_juice = 0;
            res++;
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
