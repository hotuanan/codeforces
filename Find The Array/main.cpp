#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int res = 1;
    int s = 1;
    int curr = 3;
    while(s < n) {
        s += curr;
        curr += 2;
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