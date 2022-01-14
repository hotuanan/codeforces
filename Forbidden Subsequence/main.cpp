#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int h[26] = {0};
    string s;
    string t;
    cin >> s >> t;
    for(auto c: s) h[c - 'a']++;
    if(t == "abc" && h[0] && h[1] && h[2]) {
        for(int j = 0; j < h[0]; j++) cout << (char)('a' + 0);
        for(int j = 0; j < h[2]; j++) cout << (char)('a' + 2);
        for(int j = 0; j < h[1]; j++) cout << (char)('a' + 1);
        for(int i = 3; i < 26; i++) {
            if(!h[i]) continue;
            for(int j = 0; j < h[i]; j++) cout << (char)('a' + i);
        } 
    }
    else {
        for(int i = 0; i < 26; i++) {
            if(!h[i]) continue;
            for(int j = 0; j < h[i]; j++) cout << (char)('a' + i);
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