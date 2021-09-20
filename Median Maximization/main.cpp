#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, s;
    cin >> n >> s;
    int upper_half_amount = n/2 + 1;
    cout << s / upper_half_amount << endl;
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