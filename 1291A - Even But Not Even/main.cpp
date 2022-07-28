#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int n;
    string a;
    cin >> n >> a;

    int first_odd_idx = -1;
    int sec_odd_idx = -1;
    for (int i = 0; i < n; i++) {
        if ((a[i] - '0') & 1) {
            if (first_odd_idx == -1) first_odd_idx = i;
            else sec_odd_idx = i;
        }
    }

    if (first_odd_idx == -1 || sec_odd_idx == -1) {
        cout << -1 << endl;
    }
    else {
        cout << a[first_odd_idx] << a[sec_odd_idx] << endl;
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
