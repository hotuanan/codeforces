#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    if(n == 1) cout << 9 << endl;
    else if(n == 2) cout << 4 << endl;
    else cout << n - 2 << endl;
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