#include <bits/stdc++.h>
using namespace std;
    
void solve() 
{
    int n, h;
    cin >> n >> h;
    vector<int> dmgs(n);
    for(auto &x: dmgs) cin >> x;
    int m1 = -1;
    int m2 = -1;
    for(auto x : dmgs) {
        if(x >= m1) {
            m2 = m1;
            m1 = x;
        }
        else if(x < m1 && x > m2) m2 = x;
    }
    int res = h/(m1 + m2);
    res *= 2;
    if(h % (m1 + m2) == 0) cout << res << endl;
    else if(h % (m1 + m2) <= m1) cout << res + 1 << endl;
    else cout << res + 2 << endl; 
    
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