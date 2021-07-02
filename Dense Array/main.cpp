#include <bits/stdc++.h>
using namespace std;

int l(double ma, double mi)
{
    int n = -1;
    while(mi < ma) {
        mi *= 2;
        n++;
    }
    return n;
}


void solve() 
{
    int n;
    cin >> n;
    vector<double> v(n);
    for(auto &x : v) cin >> x;

    int res = 0;
    for(int i = 0; i < n - 1; i++) {
        double mi = min(v[i], v[i + 1]);
        double ma = max(v[i], v[i + 1]);
        if(ma/mi > 2) {
            res += l(ma, mi);
        }        
    }
    cout << endl;
    cout << res << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >>t;
    while(t--)
        solve();
}