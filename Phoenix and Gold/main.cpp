#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, x;
    cin >> n >> x;
    int s = 0;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        s += v[i];
    } 
    if(s == x) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    vector<int> cant;
    s = 0;
    for(int i = 0; i < n; i++) {
        if(s + v[i] == x) {
            cant.push_back(v[i]);
            continue;
        }
        cout << v[i] << " ";
        s += v[i];
    }
    for(auto a : cant) cout << a << " ";
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