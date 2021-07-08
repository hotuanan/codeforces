#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    string a;
    cin >> n >> a;
    
    if(
        (a[0] == '2' && a[1] == '0' && a[2] == '2' && a[3] == '0') ||
        (a[0] == '2' && a[n-3] == '0' && a[n-2] == '2' && a[n-1] == '0') ||
        (a[0] == '2' && a[1] == '0' && a[n-2] == '2' && a[n-1] == '0') ||
        (a[0] == '2' && a[1] == '0' && a[2] == '2' && a[n-1] == '0') ||
        (a[n-4] == '2' && a[n-3] == '0' && a[n-2] == '2' && a[n-1] == '0')) {
        cout <<"YES\n";
        return;
    }
    cout << "NO\n";

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