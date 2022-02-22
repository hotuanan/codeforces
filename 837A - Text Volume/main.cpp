#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int res = 0;
    while (n > 0) {
        string word;
        cin >> word;
        n -= word.length();
        n--;
        int caps = 0;
        for (auto c : word) {
            if (c - 'A' >= 0 && c - 'A' <= 26) caps++;
        }
        res = max(caps, res);
    }
    cout << res << endl;


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