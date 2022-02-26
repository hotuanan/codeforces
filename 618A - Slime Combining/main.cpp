#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;

    while (n > 0) {
        int lg = log2(n);
        cout << lg + 1 << " ";
        n -= (1 << lg);
        // cout << (1 << lg)  << endl;
    }
    cout << endl;
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