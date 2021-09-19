#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    int k;
    cin >> k;
    for(int i = 0; i < n; i++) {
        if(k <= b[i]) {
            cout << n - i << endl;
            return;
        }
    }
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