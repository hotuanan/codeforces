#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    
    long long res = 1;
    for (int i = 3; i <= 2 * n; i++) {
        res *= i;
        res = res % 1000000007;
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