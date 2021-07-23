#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    string a;
    cin >> n >> a;
    int res = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == 'A'){ 
            int curr = 0;
            while(a[i + 1] == 'P' && i + 1< n) {
                i++;
                curr++;
            }
            res = max(res, curr);

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