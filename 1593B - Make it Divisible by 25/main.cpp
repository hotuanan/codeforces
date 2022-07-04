#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve()
{
    string a;
    cin >> a;
    int ans = INT_MAX;
    int length = a.length();
    
    int idx = length - 1;
    int curr_res = 0;
    while (idx >= 0) {
        if (a[idx] == '5') {
            idx--;
            while (idx >= 0 && (a[idx] != '2' && a[idx] != '7')) {
                idx--;
                curr_res++;
            }
            ans = min(ans, curr_res);
            break;
        }
        curr_res++;
        idx--;
    }

    idx = length - 1;
    curr_res = 0;
    while (idx >= 0) {
        if (a[idx] == '0') {
            idx--;
            while (idx >= 0 && (a[idx] != '0' && a[idx] != '5')) {
                idx--;
                curr_res++;
            }
            ans = min(ans, curr_res);
            break;
        }
        curr_res++;
        idx--;
    }
    cout << ans << endl;
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