#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve() 
{
    string a;
    cin >> a;

    auto dot = a.find('.');
    if (a[dot - 1] == '9') {
        cout << "GOTO Vasilisa.\n";
        return;
    }
    if ((a[dot + 1] - '0') < 5) {
        for (int i = 0; i < dot; i++) {
            cout << a[i];
        }
        cout << endl;
        return;
    }
    else {
        for (int i = 0; i < dot - 1; i++) {
            cout << a[i];
        }
        cout << (a[dot - 1] - '0') + 1 << endl;
        return; 
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