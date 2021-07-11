#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, m;
    cin >> n >> m;
    int res = 0;
    for(int a = 0; a <= m; a++) {
        for(int b = 0; b <= n; b++) {
            if((a * a + b) == n && (b * b + a) == m) res++;
        }
    }
    cout << res << endl;

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