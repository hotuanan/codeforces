#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<string> a(n);
    for(int i = 0; i < n; i++) {
        string tmp;
        cin >> tmp;
        a[i] = "." + tmp + ".";
    }
    string s(n + 2, '.');
    a.insert(a.begin(), s);
    a.push_back(s);

    int res = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(a[i][j] == a[i - 1][j + 1] && 
            a[i - 1][j + 1] == a[i + 1][j + 1] &&
            a[i + 1][j + 1] == a[i + 1][j - 1] &&
            a[i + 1][j - 1] == a[i -1][j - 1] &&
            a[i][j] == 'X') {
                res++;
            }
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