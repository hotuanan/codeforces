#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    if(n <= 30) 
        cout << "NO\n";
    else {
        cout << "YES\n";
        if(n == 36 || n == 40 || n == 44) 
            cout << n - 31 << " 6 10 15\n";
        else
            cout << n - 30 << " 6 10 14\n";
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