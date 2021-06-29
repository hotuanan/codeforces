#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int hist[26] = {0};
    for(int i = 0; i < n; i++) {
        string a;
        cin >> a;
        for(char c : a) {
            hist[(int)c % 26]++;
        }
    }

    for(int i = 0; i < 26; i++) {
        if(hist[i] % n != 0) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}
int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}