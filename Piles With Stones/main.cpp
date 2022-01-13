#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int s1 = 0;
    int s2 = 0;

    int tmp;
    for(int i = 0; i < n; i++) {
        cin >> tmp;
        s1 += tmp;
    }
    for(int i = 0; i < n; i++) {
        cin >> tmp;
        s2 += tmp;
    }
    if(s1 >= s2) cout << "YES\n";
    else cout << "NO\n";

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