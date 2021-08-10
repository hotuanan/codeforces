#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    cin >> a;
    int m = -1;
    for(auto x : a) {
        m = max(m, x - '0');
    }
    cout << m << endl;
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