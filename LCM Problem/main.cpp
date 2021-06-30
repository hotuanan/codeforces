#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int l, r;
    cin >> l >> r;
    if(2*l > r) {
        cout << "-1 -1\n";
        return; 
    }

    cout << l << " " << 2 * l << endl;
}



int main()
{
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}