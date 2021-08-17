#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    long long n, a, b;
    cin >> n >> a >> b;
    long long res = 0;
    if(2*a >= b) {
        res = (n / 2) * b;
        if(n & 1) res += a;
    }   
    else {
        res = n * a;
    }
    cout << res << endl;
    
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