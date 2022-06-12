#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int par = 0;
    for (auto x : v) {
        par += (x & 1);
    }
    if (par == 0 || par == n) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
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
