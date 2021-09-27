#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int h, w;
    cin >> h >> w;
    for(int i = 0; i < w; i++) {
        if(i & 1) cout << "0";
        else cout << "1";
    }
    cout << endl;
    if(!(h & 1)) {
        h--;
        for(int j = 0; j < w; j++) cout << "0";
        cout << endl;
    }
    for(int i = 0; i < h - 2; i++) {
        if(i & 1) {
            cout << "1";
            for(int j = 0; j < w - 2; j++) cout << "0";
            cout << "1\n";
        }
        else {
            for(int j = 0; j < w; j++) cout << "0";
            cout << endl;
        }
    }
    for(int i = 0; i < w; i++) {
        if(i & 1) cout << "0";
        else cout << "1";
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