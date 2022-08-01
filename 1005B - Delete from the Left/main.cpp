#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    string a, b;
    cin >> a >> b;

    int a_len = a.length();
    int b_len = b.length();

    for (int i = 0; i < min(a_len, b_len); i++) {
        if (a[a_len - 1 - i] != b[b_len - 1 - i]) {
            cout << a_len - i + b_len - i << endl;
            return;
        }
    }

    cout << max(a_len, b_len) - min(a_len, b_len) << endl;
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
