#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    string s;
    cin >> n >> s;

    int h[2] = {0};
    for (auto c : s) {
        h[c - '0']++;
    }
    
    if (h[1] > 0) {
        cout << '1';
    }

    for (int i = 0; i < h[0]; i++) cout << '0';
    cout << endl;
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