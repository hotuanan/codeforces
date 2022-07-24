#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int n;
    string a;
    cin >> n >> a;
    
    bool odd = false, even = false;
    for (int i = 1; i <= n; i++) {
        if (i & 1) {
            odd |= ((a[i - 1] - '0') & 1);
        } 
        else {
            even |= ((a[i - 1] - '0') % 2 == 0);
        }
    }
    if (n & 1) {
        cout << (odd ? 1 : 2) << '\n';
    } 
    else {
        cout << (even ? 2 : 1) << '\n';
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
