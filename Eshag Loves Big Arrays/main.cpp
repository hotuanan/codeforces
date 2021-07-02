#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    int m = INT_MAX;
    for(auto &x : v){
        cin >> x;
        m = min (x, m);
    }

    int res = 0;
    for(int i = 0; i < n; i++) {
        if(v[i] != m) {
            res++;
        }   
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