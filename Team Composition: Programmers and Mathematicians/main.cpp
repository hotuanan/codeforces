#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int a, b;
    cin >> a >> b;
    cout << min(min(a, b), (a + b)/4) << endl;
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