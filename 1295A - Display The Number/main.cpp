#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int n;
    cin >> n;
    
    string a((n / 2) - 1, '1');
    if (n % 2) {
        cout << 7 << a << endl;        
    }
    else {
        cout << 1 << a << endl;
    }
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
