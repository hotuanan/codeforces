#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    long long n;
    cin >> n;
    int res = 0;
    while(n != 1) {
        if(n & 1) {
            if(n % 3 == 0) n = 2*n/3;
            else if(n % 5 == 0) n = 4*n/5;
            else {
                res = -1;
                break;
            }
        }
        else n /= 2;
        res++;
    }
    cout << res << endl;
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