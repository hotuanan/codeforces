#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    bool found = false;
    for(int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if(tmp == 1) continue;
        int f = sqrt(tmp);
        if(f * f != tmp) {
            found = true;
        }
    }
    if(found) cout << "YES\n";
    else cout << "NO\n";
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