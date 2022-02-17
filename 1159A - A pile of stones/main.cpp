#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    string a;
    cin >> n >> a;

    int res = 0;
    for (auto x : a) {
        if (x == '+') res++;
        else res--;   

        res = max(0, res);
    }

    cout << res << endl;
}

int main()
{
    ios::sync_with_stdio(false); 
    // cin.tie(0);
    // int t;
    // cin >> t;
    // while(t--)
        solve();
}