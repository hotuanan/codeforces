#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int l, r;
    cin >> l >> r;
    if(l < r/2 + 1) {
        cout << r % (r/2 + 1) << endl;
    }
    else {
        cout << r % l << endl;
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