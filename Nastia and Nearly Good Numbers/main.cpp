#include <bits/stdc++.h>
using namespace std;
     
void solve() 
{
    long long a,b;
    cin >> a >> b;
    if(b == 1){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    cout << a * b << " " << a << " " << a * b + a << endl;


int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
        solve();
}