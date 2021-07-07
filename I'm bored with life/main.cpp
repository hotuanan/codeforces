#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int a, b;
    cin >> a >> b;
    long long n = min(a, b);
    long long res = 1;
    for(long long i= 2; i <= n; i++) {
        res *= i;
    }
    cout << res << endl;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}