#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(max(a,b) > max(c,d)) {
        if(max(c,d) < min(a,b)) cout << "NO\n";
        else cout << "YES\n";
    }
    else {
        if(max(a,b) < min(c, d)) cout << "NO\n";
        else cout << "YES\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}