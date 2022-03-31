#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    vector<string> v(3);
    for (int i = 0; i < 3; i++)
        getline (cin, v[i]);

    int cnt = 0;
    for (auto c : v[0]) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            cnt++;
        }
    }
    if (cnt != 5) {
        cout << "NO\n";
        return;
    }

    cnt = 0;
    for (auto c : v[1]) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            cnt++;
    }
    if (cnt != 7) {
        cout << "NO\n";
        return;
    }
    cnt = 0;
    for (auto c : v[2]) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            cnt++;
    }
    if (cnt != 5) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";

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