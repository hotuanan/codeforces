#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    int eights = 0;
    for(auto c : a) if(c == '8') eights++;
    cout << min(n/11, eights) << endl;
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