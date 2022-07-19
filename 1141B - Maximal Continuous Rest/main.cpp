#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int res = 0;
    int s = 0;
    for (int i = 0; i < n; i++) {
        while(v[i % n]) {
            s++;
            i++;
        }
        res = max(res, s);
        s = 0;
    }
    cout << res << endl;


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
