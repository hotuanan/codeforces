#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    string a;
    cin >> a;
    int n = a.length();
    if (a[0] == a[n - 1]) {
        cout << a << endl;
    }
    else {
        a[n - 1] = a[0];
        cout << a << endl;
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
