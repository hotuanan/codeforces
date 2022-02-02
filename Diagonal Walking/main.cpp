#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    string a;
    cin >> a;

    int ds = 0;
    for (int i = 0; i < n - 1; i++) {
        if ((a[i] == 'R' && a[i + 1] == 'U') || (a[i] == 'U' && a[i + 1] == 'R')) {
            ds++;
            i++;
        }
    }
    cout << n - ds << endl;

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