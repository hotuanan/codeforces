#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int res = 0;
    for(int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if(tmp == 1 || tmp == 3) res++;
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