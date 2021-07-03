#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);

    int mi = INT_MAX;
    int mi_i = -1;
    int ma = INT_MIN;
    int ma_i = -1;
    for(int i = 0; i < n; i++) {
        cin >> v[i];

        if(v[i] < mi) {
            mi = v[i];
            mi_i = i;
        }

        if(v[i] > ma) {
            ma = v[i];
            ma_i = i;
        }
    }
    int res = min(n - min(mi_i, ma_i), min(max(mi_i, ma_i) + 1, min(mi_i, ma_i) + n - max(mi_i, ma_i) + 1));
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