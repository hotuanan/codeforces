#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    unordered_map<string, int> m;
    int max_count = 0;
    string res;
    for (int i = 0; i < n - 1; i++) {
        string s = a.substr(i, 2);
        m[s]++;
        if (m[s] > max_count) {
            res = s;
            max_count = m[s];
        }
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
