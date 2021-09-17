#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;

    for(int i = 4 * n; i > 2 * n; i -= 2) {
        cout << i << " ";
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