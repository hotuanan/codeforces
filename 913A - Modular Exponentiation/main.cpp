#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int n, m;
    cin >> n >> m;
    if (n >= 32) {
        cout << m << endl;
        return;
    }

    int mod = 1;
    while (n > 0) {
        mod = mod << 1;
        n--;
    }
    cout << m % mod << endl;

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
