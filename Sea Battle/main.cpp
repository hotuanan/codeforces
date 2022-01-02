#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;
    cout << 4 + w1 + 2 * h1 + w2 + 2*h2 + (w1 - w2) << endl;

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