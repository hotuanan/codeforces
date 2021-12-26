#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    string a;
    cin >> n >> a;
    int s1 = 0;
    int s2 = 0;
    for(int i = 0; i < n/2; i++) {
        if(a[i] != '4' && a[i] != '7') {
            cout << "NO\n"; 
            return;
        }
        s1 += a[i] - '0';
    }

    for(int i = n/2; i < n; i++) {
        if(a[i] != '4' && a[i] != '7') {
            cout << "NO\n"; 
            return;
        }
        s2 += a[i] - '0';
    }
    cout << (s1 == s2 ? "YES\n" : "NO\n");

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