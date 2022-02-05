#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    cin >> a;
    string b = a;
    reverse(a.begin(), a.end());
    cout << b + a << endl;
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