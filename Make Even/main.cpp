#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    cin >> a;
    int n = a.length();
    if(!((a[n - 1] - '0') & 1)) {
        cout << "0\n";
        return;
    }
    if(!((a[0] - '0') & 1)) {
        cout << "1\n";
        return;
    }
    for(int i = 1; i < n - 1; i++) {
        if(!((a[i] - '0') & 1)) {
            cout << "2\n";
            return;
        }
    }
    cout << "-1\n";
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