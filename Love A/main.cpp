#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    cin >> a;
    int as = 0;
    for(auto c : a) {
        if(c == 'a') as++;
    }
    if(as > a.length()/2) cout << a.length() << endl;
    else cout << 2 * as - 1 << endl;    

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