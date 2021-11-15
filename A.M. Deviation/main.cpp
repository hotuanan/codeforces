#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int a, b, c;
    cin >> a >> b >> c;
    int r = (a + b + c)/3;
    cout << min(a + b + c - 3*r, abs(a + b + c - 3*(r + 1))) << endl;

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