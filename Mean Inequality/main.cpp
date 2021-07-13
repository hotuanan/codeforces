#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    n *= 2;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int lo = 0;
    int hi = n - 1;
    while(lo <= hi) {
        cout << v[lo] << " ";
        cout << v[hi] << " ";
        lo++;
        hi--;
    }
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