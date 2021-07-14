#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int h[5] = {0};
    int res = 0;
    for(int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        h[tmp]++;
    }

    res += h[4];
    res += h[3];
    h[1] = max(h[1] - h[3], 0);
    res += h[2]/2;
    h[2] = h[2]%2;
    h[1] += h[2]*2;
    res += (h[1] + 3) / 4;
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