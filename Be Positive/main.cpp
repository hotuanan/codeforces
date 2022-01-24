#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int pos = 0;
    int neg = 0;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if (tmp > 0) pos++;
        else if (tmp < 0) neg++;
    }
    
    if (pos >= (n + 1)/2) cout << 1 << endl;
    else if (neg >= (n + 1)/2) cout << -1 << endl;
    else cout << 0 << endl;
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