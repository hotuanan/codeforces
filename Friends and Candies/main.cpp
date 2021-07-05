#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    int s = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        s += v[i];
    }

    if(s % n != 0) {
        cout << "-1\n";
        return;
    }
    s /= n;
    int res = 0;
    for(auto a : v) res += a > s;
    cout << res << endl;

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