#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            swap(a[i], b[i]);
        }
    }
    int ma_a = *max_element(a.begin(), a.end());
    int ma_b = *max_element(b.begin(), b.end());
    cout << ma_a * ma_b << endl;

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