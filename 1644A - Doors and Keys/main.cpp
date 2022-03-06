#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    cin >> a;
    bool r = false;
    bool g = false;
    bool b = false;
    for (auto c : a) {
        if (c == 'r') r = !r;
        else if (c == 'g') g = !g;
        else if (c == 'b') b = !b;
        else if (c == 'R' && !r) {
            cout << "NO\n";
            return;
        }
        else if (c == 'G' && !g) {
            cout << "NO\n";
            return;
        }
        else if (c == 'B' && !b) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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