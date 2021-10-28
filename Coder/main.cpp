#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    if(n & 1) cout << n * ((n + 1)/2) - n/2 << endl; 
    else cout << n * ((n + 1)/2) << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if((j + i) & 1) {
                cout << '.';
            }
            else cout << 'C';
        }
        cout << endl;
    }
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