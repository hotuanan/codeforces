#include <bits/stdc++.h>
using namespace std;
    
void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    for(int i = 0; i < n; i+=2) {
        cout << v[i + 1] << " " << -v[i] << " ";
    }
    cout << endl;
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