#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int x;
    cin >> x;
    
    if(x == 1) {
        cout << -1 << endl;
        return;
    }

    int b = 2;
    int a = x & 1 ? x - 1 : x;
    cout << a << " " << b << endl;

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