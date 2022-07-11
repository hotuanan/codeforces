#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;
    sort(v.begin(), v.end());
    int i = 0;
    while (i < n && v[i] == v[0]) {
        i++;
    }

    int j = n - 1;
    while (j >= 0 && v[j] == v[n - 1]) {
        j--;
    }
    cout << max(0, n - i - (n - 1 - j)) << endl;


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