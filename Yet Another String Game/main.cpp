#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    cin >> a;

    for(int i = 0; i < a.length(); i++) {
        char c;
        if(i & 1) c = 'z';
        else c = 'a';
        while(a[i] == c) {
            if(i & 1) c = (char)(((int)c) - 1);
            else c = (char)(((int)c) + 1);
        }
        a[i] = c;
    }
    cout << a << endl;
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