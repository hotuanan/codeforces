#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    cin >> a;
    int n = a.length();

    int lo = 0;
    int hi = n - 1;
    while(n > 0) {
        if(a[lo] == (char)(n + 96)) lo++;
        else if(a[hi] == (char)(n + 96)) hi--;
        else break;
        n--;
    }
    if(n > 0) cout << "NO\n";
    else cout << "YES\n";
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