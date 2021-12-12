#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, m;
    cin >> n >> m;

    m = m % (n*(n + 1)/2);
    int i = 1;
    while(m >= i) {
        m -= i;
        i++;
    }
    cout << m << endl;
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