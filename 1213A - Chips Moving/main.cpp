#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int n;
    cin >> n;
    int odds = 0;
    int evens = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        odds += x & 1;
        evens += !(x & 1);
    }
    cout << min(odds, evens) << endl;
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
