#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int second_max = -1;
    int max_idx;
    int max = -1;
    for (int i = 0; i < n; i++) {
        if (v[i] > max) {
            second_max = max;
            max = v[i];
            max_idx = i;
        }
        else if (v[i] > second_max) {
            second_max = v[i];
        }
    }
    cout << max_idx + 1 << " " << second_max << endl;
    
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