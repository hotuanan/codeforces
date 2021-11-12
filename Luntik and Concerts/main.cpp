#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int a, b, c;
    cin >> a >> b >> c;
    if(c & 1 && a & 1) cout << "0\n";
    else if(c & 1 && !(a & 1)) cout << "1\n";
    else if(!(c & 1) && a & 1) cout << "1\n";
    else cout << "0\n";

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