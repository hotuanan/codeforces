#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve() 
{
    string a;
    cin >> a;
    for (auto c : a) {
        if (c == 'H' || c == 'Q' || c == '9') {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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