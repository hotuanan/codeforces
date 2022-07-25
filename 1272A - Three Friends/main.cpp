#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    vector<int> dirs = {-1, 0, 1};
    vector<int> v(3);
    for (int i = 0; i < 3; i++) cin >> v[i];

    int res = INT_MAX;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                int a = dirs[i] + v[0];
                int b = dirs[j] + v[1];
                int c = dirs[k] + v[2];
                res = min(res, abs(a - b) + abs(b - c) + abs(a - c));
            }
        }
    }
    
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
