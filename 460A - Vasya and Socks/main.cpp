#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve() 
{
    int n, m;
    cin >> n >> m;

    int r = n + (n - 1)/(m - 1);
    cout << r << endl;
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