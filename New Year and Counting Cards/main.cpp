#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    cin >> a;
    int res = 0;
    for(auto c : a) {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') res++;
        else if(c == '1' || c == '3' || c == '5' || c == '7' || c == '9') res++;
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