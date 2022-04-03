#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int h[4];
    for (int i = 0; i < 4; i++)
        cin >> h[i];
    sort(h, h + 4);
    cout << h[0] * h[2] << endl;

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