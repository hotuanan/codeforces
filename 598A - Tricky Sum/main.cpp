#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    long long res = (n + 1)* n/2;
    long long st = 1;
    while (st <= n) {
        res -= 2 * st;
        st = st * 2;
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