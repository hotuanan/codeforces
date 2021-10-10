#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n,d;
    cin >> n >> d;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    while(d > 0) {
        for(int i = 1; i < n; i++) {
            if(v[i]) {
                v[i - 1]++;
                v[i]--;
                break;
            }
        }
        d--;
    }
    cout << v[0] << endl;
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