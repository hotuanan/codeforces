#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    unordered_map<char, int> m;
    for(int i = 0; i < 26; i++) {
        char a;
        cin >> a;
        m[a] = i + 1;
    }
    string tar;
    cin >> tar;
    int res = 0;
    for(int i = 0; i < tar.length() - 1; i++) 
        res += abs(m[tar[i]] - m[tar[i + 1]]);
    cout << res << endl;
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