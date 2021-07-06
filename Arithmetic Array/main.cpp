#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    int s = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        s += v[i];
    }

    if(s <= 0) cout << 1 << endl;
    else {
        if(s < n) cout << 1 << endl;
        else cout << s - n << endl;
    }
    
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