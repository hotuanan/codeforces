#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    if (n > 19) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    int last = 1;
    for (int i = 0; i < n; i++) {
        cout << last << " ";
        last *= 3;
    }
    cout << endl;
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