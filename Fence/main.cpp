#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    long long h[3];
    for(int i = 0; i < 3; i++) {
        cin >> h[i];
    }
    sort(h, h+3);
    cout << h[0] + h[1] + h[2] - 1 << endl;
    
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