#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    if (n % 7 == 0) {
        cout << n << endl;
        return;
    }
    for (int i = -(n % 10); i <= 9 - (n % 10); i++) {
        if ((n + i) % 7 == 0) {
            cout << n + i << endl;
            return;
        }
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