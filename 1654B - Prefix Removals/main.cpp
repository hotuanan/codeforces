#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    cin >> a;
    unordered_map<char, int> m;
    vector<int> v(a.length(), 0);
    for (int i = a.length() - 1; i >= 0; i--) {
        m[a[i]]++;
        v[i] = m[a[i]];
    }
    int idx = a.length();
    for (int i = a.length() - 1; i >= 0; i--) {
        if (v[i] == 1) {
            idx = min(idx, i);
        }
    }
    cout << a.substr(idx) << endl;
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