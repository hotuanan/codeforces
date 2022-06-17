#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    long long a, b;
    cin >> a >> b;
    if (a < b) {
        swap(a, b);
    }

    if (a == b) {
        cout << "0 0" << endl;
        return;
    }
    long long res = abs(a - b);
    cout << res << " " << min(b % res, res - (b % res)) << endl;
}  
 
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
        solve();
}
