#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    string a;
    cin >> n >> a;

    cout << string(n, a[n-1]) << endl; 
}
int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}