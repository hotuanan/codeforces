#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int no_chests, no_keys;
    cin >> no_chests >> no_keys;
    vector<int> chests(no_chests);
    vector<int> keys(no_keys);

    int odd_chests = 0;
    int odd_keys = 0;
    for(auto &x : chests) { 
        cin >> x;
        if(x & 1) odd_chests++;
    }
    for(auto &x : keys) {
        cin >> x;
        if(x & 1) odd_keys++;
    }

    cout << min(odd_chests, no_keys - odd_keys) + min(odd_keys, no_chests - odd_chests) << endl;


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