#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int res = (n/k) * k;
    if (n % k >= k/2) res += k/2;
    else res += n % k;
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