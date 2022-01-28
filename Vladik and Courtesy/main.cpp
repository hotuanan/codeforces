#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int a, b;
    cin >> a >> b;
    for (int i = 1;; i++) {
        if (i % 2 == 0) {
            // valera
            if (b < i) {
                cout << "Valera\n";
                return;
            }
            b -= i;
        }
        else {
            if (a < i) {
                cout << "Vladik\n";
                return;
            }
            a -= i;
        }
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