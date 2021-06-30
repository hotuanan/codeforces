#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int res = 0;

    for(int i = 1; i <= n; i = 10*i + 1) {
        for(int d = 1; d < 10; d++) {
            if(i * d <= n) {
                res++;
            }
        }
    }
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}