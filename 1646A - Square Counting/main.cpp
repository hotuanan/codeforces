#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    long long n, s;
    cin >> n >> s;

    cout << s / (n*n) << endl;
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