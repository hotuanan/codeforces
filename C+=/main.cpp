#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int a, b, n;
    cin >> a >> b >> n;
    int res = 0;

    while(a <= n && b <= n) {
        if(a < b) {
            a += b;
        }
        else {
            b += a;
        }
        res++;
    }
    cout << res << endl;


}
int main()
{
    int t;
    cin >> t;
    while(t--) 
        solve();
    
}