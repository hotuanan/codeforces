#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, k;
    cin >> n >> k;
    vector<int> res;
    for(int i = k - 1; i >= (k + 1)/2; i--) {
        res.push_back(i);
    }
    for(int i = k + 1; i <= n; i++) res.push_back(i);
    cout << res.size() << endl;
    for(int i = 0; i < res.size(); i++) cout << res[i] << " ";
    cout << endl;
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