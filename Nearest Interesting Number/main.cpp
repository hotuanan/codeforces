#include <bits/stdc++.h>
using namespace std;

int sum_digs(int n) {
    int ret = 0;    
    while(n > 0) {
        ret += n % 10;
        n /= 10;
    }
    return ret;
}

void solve() 
{
    int n;
    cin >> n;
    int dig_sum = sum_digs(n);
    while((sum_digs(n) % 4)) {
        n++;
    }
    cout << n << endl;
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