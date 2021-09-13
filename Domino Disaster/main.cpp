#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    for(int i = 0; i < n; i++) {
        if(a[i] == 'U') a[i] = 'D';
        else if(a[i] == 'D') a[i] = 'U';
    }
    cout << a << endl;
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