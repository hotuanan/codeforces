#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, k;
    cin >> n >> k;
    string a;
    cin >> a;

    bool is_palindrome = true;
    for (int i = 0; i < n/2; i++) {
        if (a[i] != a[n - 1 - i]) {
            is_palindrome = false;
            break;
        }
    }

    if (is_palindrome || k < 1) {
        cout << 1 << endl;
    }
    else {
        cout << 2 << endl;
    }
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