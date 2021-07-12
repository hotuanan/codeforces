#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    long long n;
    cin >> n;
    if(n % 2050 != 0) {
        cout << -1 << endl;
        return;
    }
    n /= 2050;
    int res = 0;
    while(n > 0) {
        res += n % 10;
        n /= 10;
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