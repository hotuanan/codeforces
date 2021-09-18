#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    string a;
    cin >> n >> a;
    for(int i = 0; i < n - 1; i++) {
        if(a[i] != a[i + 1]) {
            cout << i + 1 << " " << i + 2 << endl;
            return;
        }
    }
    cout << "-1 -1\n";
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