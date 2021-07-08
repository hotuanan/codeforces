#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int a, b, k;
    cin >> a >> b >> k;
    long long res = 0;
    if(k & 1) {
        res += a;
        k--;
    }
    res += (long long)(a - b) * (long long)(k/2);
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