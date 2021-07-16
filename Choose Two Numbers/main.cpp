#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int m1 = -1;
    int m2 = -2;
    int n;
    cin >> n;
    int tmp;
    for(int i = 0; i < n; i++) {
        cin >> tmp;
        m1 = max(m1, tmp);
    }
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> tmp;
        m2 = max(m2, tmp);
    }
    cout << m1 << " " << m2 << endl;
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