#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, k;
    cin >> n >> k;
    int res = n;
    for(int q = 0; q < n; q++) {
        string a;
        cin >> a;
        int c_k = 0;
        for(auto c : a) {
            if(c == '4' || c == '7') c_k++;
        }
        if(c_k > k) res--; 
    }
    cout << res << endl;
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