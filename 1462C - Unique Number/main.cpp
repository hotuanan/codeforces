#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int n;
    cin >> n;
    if (n > 45) {
        cout << -1 << endl;
        return;
    }
    if (n < 10) {
        cout << n << endl;
        return;
    }
    string res = "";
    int curr = 9;
    while (n >= curr && curr > 0) {
        res += curr + '0';
        n -= curr;
        curr--;
    }
    if (n != 0) res += n + '0';
    sort(res.begin(), res.end());
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
