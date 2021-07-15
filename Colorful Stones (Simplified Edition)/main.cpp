#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    string t;
    cin >> a >> t;
    int curr = 0;
    for(auto c : t) {
        if(a[curr] == c) curr++;
    }
    cout << curr + 1 << endl;
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