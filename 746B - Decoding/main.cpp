#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    string res(n, 'x');

    int inc = 0;
    for (int i = 0; i < n; i++) {
        res[(n - 1)/2 + inc] = a[i];
        if (i % 2 == 0) inc = abs(inc) + 1;
        if (n % 2) {
            inc *= -1;
        }
        else {
            if (i & 1) inc *= -1;
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
