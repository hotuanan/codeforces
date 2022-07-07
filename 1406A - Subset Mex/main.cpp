#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve()
{
    int n;
    cin >> n;   
    unordered_map<int, int> m;
    int b = -1;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        m[x]++;
        b = max(b, x);
    }

    int res = 0;
    for (int i = 0; i <= b + 1; i++) {
        if (m.find(i) != m.end()) {
            if (m[i] == 1) {
                res = i;
                for (int j = i + 1; j <= b + 1; j++) {
                    if (m.find(j) == m.end()) {
                        res += j;
                        break;
                    }                    
                }
                break;
            }

        }
        else {
            res = 2 * i;
            break;
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