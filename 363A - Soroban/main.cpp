#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    if (n == 0) {
        cout << "O-|-OOOO" << endl;
        return;
    }

    while (n > 0) {
        int digit = n % 10;
        n /= 10;
        if (digit < 5) {
            cout << "O-|";
        }
        else {
            cout << "-O|";
            digit -= 5;
        }
        int i;
        for (i = 0; i < digit; i++) {
            cout << "O";
        }
        cout << "-";
        for (; i < 4; i++) {
            cout << "O";
        }
        cout << endl;
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