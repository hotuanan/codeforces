#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;

    for (int i = 1; i <= 35; i++) {
        if (n == (i * (i + 1)/2)) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
    return;

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