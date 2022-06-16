#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int n;
    cin >> n;
    if (n == 1) {
        cout << 9 << endl;
        return;
    }
    else if (n == 2) {
        cout << 98 << endl;
        return;
    }
    cout << 98;
    int curr = 9;
    for (int i = 2; i < n; i++) {
        cout << curr;
        curr = (curr + 1) % 10;
    }
    cout << endl;
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
