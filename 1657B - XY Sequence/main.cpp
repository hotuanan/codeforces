#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, B, x, y;
    cin >> n >> B >> x >> y;

    long long ans = 0;
    int last = 0;
    for (int i = 0; i < n; i++) {
        if (last + x <= B) {
            last += x;
            ans += last;
        }
        else {
            last -= y;
            ans += last;
        }
    }
    cout << ans << endl;
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