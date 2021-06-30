#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    long long n, m, x;
    cin >> n >> m >> x;
    long long col = (x-1)/n;
    long long row = x - n*((x-1)/n) - 1;
    cout << m*row + col + 1 << endl; 
}
int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}