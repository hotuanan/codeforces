#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, m;
    cin >> n >> m;
    int s = 0;
    for(int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        s += tmp;
    }
    if(s >= m) cout << m << endl;
    else cout << s << endl;

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