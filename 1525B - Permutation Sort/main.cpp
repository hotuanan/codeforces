#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    bool sorted = true;
    for (int i = 0; i < n; i++) {
        if (v[i] != i + 1) {
            sorted = false;
            break;
        }
    }

    if (sorted) cout << 0 << endl;
    else if (v[0] == 1 || v[n - 1] == n) cout << 1 << endl;
    else if (v[0] == n && v[n - 1] == 1) cout << 3 << endl;
    else cout << 2 << endl;

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
