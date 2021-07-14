#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    cin >> a;

    if(a.find("1111111") != string::npos) {
        cout << "YES\n";
        return;
    }
    if(a.find("0000000") != string::npos) {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
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