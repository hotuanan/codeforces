#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == '1') continue;

        int j = i + 1;
        while (j < n && a[j] == '1') j++;
        if (j >= n) break;

        if (j - i == 1) ans += 2;
        else if (j - i == 2) ans += 1;
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