#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, d;
    cin >> n >> d;

    int res = 0;
    int curr = 0;
    for(int i = 0; i < d; i++) {
        string day;
        cin >> day;
        bool absent = false;
        for(int j = 0; j < n; j++) {
            if(day[j] == '0') {
                absent = true;
                break;
            }
        }
        if(absent) curr++;
        else curr = 0;
        res = max(curr, res);
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