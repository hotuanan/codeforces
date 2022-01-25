#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int h[26] = {0};
    string a;
    cin >> a;
    for (auto c : a) {
        h[c - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < h[i]; j++) {
            cout << (char)(i + 'a');
        }
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