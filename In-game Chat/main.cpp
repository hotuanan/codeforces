#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    string a;
    cin >> n >> a;
    int curr = 0;
    for(int i = n - 1; i >= 0; i--) {
        if(a[i] == ')') curr++;
        else break;
    }

    if(curr > n - curr) cout << "Yes\n";
    else cout << "No\n";
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