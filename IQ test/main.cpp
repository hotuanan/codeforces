#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int h[2] = {0};
    int last_odd = 0;
    int last_even = 0;
    for(int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        h[tmp & 1]++;
        if(tmp & 1) last_odd = i + 1;
        else last_even = i + 1;
    }
    if(h[0] == 1) cout << last_even << endl;
    else cout << last_odd << endl;
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