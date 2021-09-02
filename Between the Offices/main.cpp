#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    string a;
    cin >> n >> a;
    int sf = 0;
    int fs = 0;
    for(int i = 0; i < n - 1; i++) {
        if(a[i] == a[i + 1]) continue;
        if(a[i] == 'S') sf++;
        else fs++;
    }
    
    if(sf > fs) cout << "YES\n";
    else cout << "NO\n";
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