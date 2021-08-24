#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    cin >> a;
    int l = a.length();
    if(a[l - 1] == 'o') cout << "FILIPINO\n";
    else if(a[l - 1] == 'u') cout << "JAPANESE\n";
    else cout << "KOREAN\n";
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