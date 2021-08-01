#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        if(i % 3 == 0) cout << "a";
        if(i % 3 == 1) cout << "b";
        if(i % 3 == 2) cout << "c";
    }
    cout << endl;
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