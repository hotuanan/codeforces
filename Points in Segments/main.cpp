#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, m;
    cin >> n >> m;
    bool a[101] = {0};
    int cnt = m;
    while(n--) {
        int l, r;
        cin >> l >> r;
        for(int i = l; i <= r; i++) {
            if(!a[i]) {
                a[i] = true;
                cnt--;
            }
        }
    }

    cout << cnt << endl;
    for(int i = 1; i <= m; i++) {
        if(!a[i]) cout << i << " ";
    }
    cout << endl;
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