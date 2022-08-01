#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    int s = 0;
    int odds = 0;
    for (int i = 0; i < n; i++) {
        s += v[i];
        if (v[i] & 1) odds++;
    }
    
    if (s & 1) cout << odds << endl;
    else cout << n - odds << endl;
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
