#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if(r1 < l2) {
        cout << r1 << " " << l2 << endl;
    }
    else if (l1 > r2) {
        cout << l1 << " " << r2 << endl;
    }
    else {
        if(l2 < r1) cout << r1 << " " << l2 << endl;
        else cout << l1 << " " << r1 << endl;
    }
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