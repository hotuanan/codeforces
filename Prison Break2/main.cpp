#include <bits/stdc++.h>
using namespace std;

int calc(int n, int m, int r, int c) {
    return abs(n - r) + abs(m - c);
}

void solve() 
{
    int n, m, r, c;
    cin >> n >> m >> r >> c;
    cout << max(calc(1, 1, r, c), max(calc(1, m, r, c), max(calc(n, 1, r, c), calc(n, m, r, c)))) << endl;
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