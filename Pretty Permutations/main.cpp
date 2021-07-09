#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int i = 1;
    bool swap = 0;
    if(n & 1) {
        cout << "3 1 2 ";
        i = 4;
    }
    for(; i <= n; i++) {
        if(!swap) {
            cout << i + 1 << " ";
            swap = 1;
        }
        else {
            cout << i - 1 << " ";
            swap = 0;
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