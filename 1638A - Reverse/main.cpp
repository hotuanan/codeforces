#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> p(n);
    for (auto &x : p) cin >> x;
    int l = 0;
    int r = n - 1;

    while (l <= r && p[l] == (l + 1)) {
        l++;
    }

    while (l <= r && p[r] != l + 1) {
        r--;
    }

    for (int i = 0; i < l; i++) {
        cout << p[i] << " ";
    }

    for (int i = l; i <= r; i++) {
        cout << p[r - i + l] << " ";
    }
    for (int i = r + 1; i <= n - 1; i++) {
        cout << p[i] << " ";
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