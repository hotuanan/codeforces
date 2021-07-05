#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int* hist = new int[n + 1];
    memset(hist, 0, sizeof(int)*(n+1));
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        hist[v[i]]++;
    }
    int i;
    for(i = 1; i <= n; i++) {
        if(hist[i] == 1) break;
    }
    if(i > n) {
        cout << -1 << endl;
        return;
    }
    cout << find(v.begin(), v.end(), i) - v.begin() + 1 << endl;
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