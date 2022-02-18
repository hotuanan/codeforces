#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;

    int a = sqrt(n);
    int b = sqrt(n);

    while (a * b != n) {
        if (a * b < n) {
            b++;
        }
        else {
            a--;
        }
    }
    cout << a << " " << b << endl;
}

int main()
{
    ios::sync_with_stdio(false); 
    // cin.tie(0);
    // int t;
    // cin >> t;
    // while(t--)
        solve();
}