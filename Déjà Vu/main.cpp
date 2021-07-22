#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    cin >> a;
    int l = a.length();
    for(int i = 0; i < l; i++) {
        if(a[i] != 'a') {
            cout << "YES\n";
            string res = "a" + a;
            int res_l = l + 1;
            int j;
            for(j = 0; j < res_l/2; j++) {
                if(res[j] != res[res_l - 1 - j]) break;
            }
            if(j == res_l/2) res = a + "a";
            cout << res << endl;
            return;
        }
    }
    cout << "NO\n";
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