#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    unordered_map<int, int> m;
    vector<int> cp(n);
    for(int i = 0; i < n; i++) cp[i] = v[i];
    sort(v.begin(), v.end());
    int rank = 1;
    for(int i = n - 1; i >= 0; i--) {
        if(m.find(v[i]) == m.end()) {
            m[v[i]] = rank;
            rank++;
        }
        else rank++;
    }
    for(auto x : cp) cout << m[x] << " ";
    cout << endl;
}
    
    
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    // int t;
    // cin >> t;
    // while(t--)
        solve();
}