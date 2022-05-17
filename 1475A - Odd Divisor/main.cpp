#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve() 
{
    long long n;
    cin >> n;
    double lg = log2(n);
    if (floor(lg) == lg) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
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