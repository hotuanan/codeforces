#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
        for (int j = n; j > 0; j--) {
            if (i == j) continue;
            cout << j << " ";
        }
        cout << endl;
    }
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