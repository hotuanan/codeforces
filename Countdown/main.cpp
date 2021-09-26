#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    string a;
    cin >> n >> a;
    int res = 0;
    if(a[n - 1] - '0') {
        res += a[n-1] - '0'; 
    }
    for(int i = n - 2; i >= 0; i--) {
        if(a[i] - '0') {
            res++;
            res += a[i] - '0';
        }
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