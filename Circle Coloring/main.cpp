#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    vector<int> b(n);
    for(auto &x : b) cin >> x;
    vector<int> c(n);
    for(auto &x : c) cin >> x;

    cout << a[0] << " ";
    int first = a[0];
    int last = a[0];
    for(int i = 1; i < n - 1; i++) {
        if(a[i] != last) last = a[i];
        else last = b[i];
        cout << last << " ";
    }
    if(a[n - 1] != first && a[n - 1] != last) cout << a[n - 1] << endl;
    else if(b[n - 1] != first && b[n - 1] != last) cout << b[n - 1] << endl;
    else cout << c[n - 1] << endl;
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