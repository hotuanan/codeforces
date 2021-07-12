#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int res = 0;
    
    while(n > 1) {
        if(n & 1 || n == 2) n--;
        else {
            int l = n / 2;
            n /= l;
        }
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