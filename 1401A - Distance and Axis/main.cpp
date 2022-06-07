#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int n, k;
    cin >> n >> k;
    if (n < k) {
        cout << k - n << endl;
    }
    else {
        if (n % 2 == k % 2) {
            cout << 0 << endl;
        }
        else {
            cout << 1 << endl;
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
