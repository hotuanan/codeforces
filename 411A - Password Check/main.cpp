#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve() 
{
    string a;
    cin >> a;
    if (a.length() < 5) {
        cout << "Too weak\n";
        return;
    }
    bool digit = false;
    bool lower = false;
    bool upper = false;
    for (auto c : a) {
        if (c >= 'a' && c <= 'z') {
            lower = true;
        } else if (c >= 'A' && c <= 'Z') {
            upper = true;
        } else if (c >= '0' && c <= '9') {
            digit = true;
        }
    }
    if (digit && upper && lower) {
        cout << "Correct\n";
    }
    else {
        cout << "Too weak\n";
    }
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