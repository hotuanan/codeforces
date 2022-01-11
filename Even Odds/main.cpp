#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    long long n, k;
    cin >> n >> k;

    if(k <= n/2 + (n & 1)) {
        cout << 2 * k - 1 << endl;
    }
    else {
        k -= n/2 + (n & 1);
        cout << 2 * k << endl;
    }
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