#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a + b <= c) cout << 2*(a + b) << endl;
    else cout << min(a, b) + c + min(c + min(a, b), max(a, b)) << endl;
    
    
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}