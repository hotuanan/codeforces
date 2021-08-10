#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    string a;
    cin >> n >> a;
    string res = "0000000000";
    for(int i = 0; i < n; i++) {
        if(a[i] == 'L') {
            for(int i = 0; i < 10; i++) {
                if(res[i] == '0') {
                    res[i] = '1';
                    break;
                }
            }            
        }
        else if (a[i] == 'R') {
            for(int i = 9; i >= 0; i--) {
                if(res[i] == '0') {
                    res[i] = '1';
                    break;
                }
            }
        }
        else {
            res[a[i] - '0'] = '0';
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