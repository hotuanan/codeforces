#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> res(n);
    vector<int> input(n);
    for(auto &x : input) cin >> x;

    res[n - 1] = input[n - 1];
    int curr = res[n - 1];
    for(int i = n - 2; i >= 0; i--) {
        res[i] = input[i] + curr;
        curr = (res[i] - curr);
    }

    for(int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
    cout << endl;
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