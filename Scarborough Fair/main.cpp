#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, m;
    cin >> n >> m;

    string a;
    cin >> a;

    for(int i = 0; i < m; i++) {
        int l, r;
        char src, tar;
        cin >> l >> r;
        cin >> src >> tar;
        for(int j = l - 1; j < r; j++) {
            if(a[j] == src) a[j] = tar;
        }
    }
    cout << a << endl;

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