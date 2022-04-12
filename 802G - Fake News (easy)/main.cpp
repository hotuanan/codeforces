#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    cin >> a;
    int n = a.length();
    int i = 0;
    bool found = false;
    for (; i < n; i++) {
        if (a[i] == 'h') {
            break;
        }
    }
    for (; i < n; i++) {
        if (a[i] == 'e') {
            break;
        }
    }
    for (; i < n; i++) {
        if (a[i] == 'i') {
            break;
        }
    }
    for (; i < n; i++) {
        if (a[i] == 'd') {
            break;
        }
    }
    for (; i < n; i++) {
        if (a[i] == 'i') {
            found = true;
            break;
        }
    }
    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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