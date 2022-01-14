#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int mi = INT_MAX;
    int ma = INT_MIN;
    for(int i = 0 ;i < n; i++) {
        int tmp;
        cin >> tmp;
        mi = min(mi, tmp);
        ma = max(ma, tmp);
    }
    cout << ma - mi << endl;
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