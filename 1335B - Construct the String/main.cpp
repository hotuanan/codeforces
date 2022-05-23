#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int n, a, b;
    cin >> n >> a >> b;
    string res = ""; 
    for (int i = 0; i < b - 1; i++) {
        res += (char)('a' + i);
    }

    while (res.length() < a) {
        res += (char)('a' + b - 1);
    }
    int curr_idx = 0; 
    while (res.length() < n) {
        res += res[curr_idx];
        curr_idx++;
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
