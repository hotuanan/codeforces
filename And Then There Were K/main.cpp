#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    if(n == 1) {
        cout << 0 << endl;
        return;
    }

    int res = 1;
    while(n >= res) {
        res *= 2;
    }
    cout << res/2 - 1 << endl;
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