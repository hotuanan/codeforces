#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve() 
{
    string a;
    cin >> a;
    if (a[0] != '-') {
        cout << a << endl;
        return;
    }
    int cont_idx;
    if (a[a.length() - 1] < a[a.length() - 2]) {
        cont_idx = a.length() - 2;
    } else {
        cont_idx = a.length() - 1;
    }
    int i = 0;
    if (a.length() == 3 && (a[1] == '0' || a[2] == '0')) {
        i++;
    }

    for (; i < a.length(); i++) {
        if (i == cont_idx) continue;
        cout << a[i];
    }
    cout << endl;
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