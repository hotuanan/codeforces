#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    cin >> a;
    int as = 0;
    int bs = 0;
    int cs = 0;
    for(auto c : a) {
        if(c == 'A') as++; 
        else if(c == 'B') bs++;
        else cs++;
    }
    if(as + cs == bs) cout << "YES\n";
    else cout << "NO\n";
    
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