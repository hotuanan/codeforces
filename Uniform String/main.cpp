#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, k;
    cin >> n >> k;
    string res = "";
    int x = 0;
    for(int i = 0; i < n; i++) {
        res += (char)(97 + x);
        x++;
        x = x % k;
    }
    cout << res << endl;
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