#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    long long mi = 0;
    long long ma = 0;

    for (int i = 0; i < n; i++) {
        long long s = v[i];
        while (s % x != 0 && i < n) {
            i++;
            if (i == n) break;
            s += v[i];
        }
        mi += (s + x - 1) / x;
    }
    for (int i = 0; i < n; i++) {
        long long s = v[i];
        while (s % x == 0 && i < n) {
            i++;
            if (i == n) break;
            s += v[i];
        }
        ma += (s + x - 1) / x;
    }
    cout << mi << " " << ma << endl;
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
