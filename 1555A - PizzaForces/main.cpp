#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    long long n;
    cin >> n;
    cout << max(6LL, n + 1) / 2 * 5 << endl;
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
