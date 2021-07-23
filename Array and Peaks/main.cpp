#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, k;
    cin >> n >> k;
    if(n - 1 - k < k) {
        cout << "-1\n";
        return;
    }
    for(int i = 1; i <= n; i++) {
        if(k > 0) {
            k--;
            cout << i << " " << n << " ";
            n--;
        }
        else {
            cout << i << " ";
        }
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