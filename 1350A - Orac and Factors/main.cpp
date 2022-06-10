#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int n, k;
    cin >> n >> k;
    if (n % 2 == 0) {
        n += 2;
    }
    else {
        bool changed = false;
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) {
                n += i;
                changed = true;
                break;
            }
        }
        if (!changed) n+= n; 
    }
    cout << n + 2 * (k - 1) << endl;
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
