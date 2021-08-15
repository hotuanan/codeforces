#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, s;
    cin >> n >> s;
    int res = 0;
    while(s > n) {
        res += s/n;
        s = s % n;
        n--;
    }
    if(s != 0) res++;
    cout << res << endl;
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