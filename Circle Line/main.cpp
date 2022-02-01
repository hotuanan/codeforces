#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    int st, ta;
    cin >> st >> ta;
    int s = min(st, ta);
    int t = max(st, ta);


    int a = 0;
    for (int i = s - 1; i != t - 1; i++) {
        a += v[i];
    }
    int b = 0;
    for (int i = t - 1; i != s - 1; i = (i + 1) % n) {
        b += v[i];
    }
    cout << min(a, b) << endl;

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