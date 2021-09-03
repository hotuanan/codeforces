#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int r = n % 4;

    if(r == 0) cout << "1 A\n";   
    else if(r == 1) cout << "0 A\n";
    else if(r == 2) cout << "1 B\n";
    else cout << "2 A\n";
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