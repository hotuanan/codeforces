#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, k;
    cin >> n >> k;
    string a;
    cin >> a;
    int hist[26] = {};
    for(auto c : a) {
        hist[(int)c - (int)'A']++;
    }
    int res = INT_MAX;
    for(int i = 0; i < k; i++) {
        res = min(hist[i], res);
    }
    cout << res * k << endl;



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