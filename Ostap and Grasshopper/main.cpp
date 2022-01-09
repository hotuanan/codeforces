#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, k;
    cin >> n >> k;

    string a;
    cin >> a;
    int obj_idx = -1;
    for(int i = 0; i < n; i++) {
        if(obj_idx == -1 && a[i] != '#' && a[i] != '.') {
            obj_idx = i;
            continue;
        }

        if(obj_idx != -1 && (i - obj_idx) % k == 0) {
            if(a[i] == '#') cout << "NO\n";
            else if(a[i] == '.') continue;
            else cout << "YES\n";
            return;
        } 
    }
    cout << "NO\n";
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