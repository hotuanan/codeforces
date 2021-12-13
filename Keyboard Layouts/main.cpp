#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    string b;
    string trans;
    cin >> a >> b >> trans;

    unordered_map<char, char> m;
    for(int i = 0; i < 26; i++) {
        m[a[i]] = b[i];
        m[(char)((int)a[i] - 32)] = (char)((int)b[i] - 32);
    }

    for(auto c : trans) {
        if(m.find(c) == m.end()) cout << c;
        else cout << m[c];
    }
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