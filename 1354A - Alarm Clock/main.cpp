#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if (b < a && c <= d) {
        cout << -1 << endl;
        return;
    }
    
    if (b >= a) {
        cout << b << endl;
        return;
    }

    long long inc = c - d;
    cout << (((a - b) + inc - 1)/inc) * c + b << endl;



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
