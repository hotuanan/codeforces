#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    long long n, x, y;
    cin >> n >> x >> y;
    long long white_dist = min(x - 1, y - 1);
    long long black_dist = min(n - x, n - y);
    if (white_dist <= black_dist) cout << "White\n";
    else cout << "Black\n";

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