#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int hist[101] = {0};
    int n;
    cin >> n;

    int res = 0;

    for(int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        hist[tmp]++;
        res = max(res, hist[tmp]);
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