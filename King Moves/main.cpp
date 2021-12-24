#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string pos;
    cin >> pos;
    if(pos == "a8" || pos == "a1" || pos == "h8" || pos == "h1") cout << 3 << endl;
    else if(pos[0] == 'a' || pos[0] == 'h' || pos[1] == '1' || pos[1] == '8') cout << 5 << endl;
    else cout << 8 << endl;
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