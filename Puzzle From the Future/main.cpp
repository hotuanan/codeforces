#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    string b;
    cin >> n >> b;

    string res = "1";
    for(int i = 1; i < n; i++) {
        if('1' + b[i] == res[i - 1] + b[i - 1]) res += '0';
        else res += '1';
    }
    cout << res << endl;
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