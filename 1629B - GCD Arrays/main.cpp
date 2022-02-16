#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int l, r, k;
    cin >> l >> r >> k;
    
    if (l == r && l == 1) {
        cout << "NO" << endl;
        return;
    }

    if (l == r) {
        cout << "YES" << endl;
        return;
    }

    int interval_length = r - l + 1;
    int odds = (interval_length + (l & 1))/2;

    if (k >= odds) cout << "YES" << endl;
    else cout << "NO" << endl;
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