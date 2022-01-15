#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, m;
    cin >> n >> m;
    float mi = 999999999.;

    for(int i = 0; i < n; i++) {
        float a,b;
        cin >> a >> b;
        mi = fmin(mi, a/b);
    }

    cout.precision(10);
    cout << mi * m << endl;

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