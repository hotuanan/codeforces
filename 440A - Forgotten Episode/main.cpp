#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    long long n;
    cin >> n;

    long long s = 0;
    for (int i = 0; i < n - 1; i++) {
        int tmp;
        cin >> tmp;
        s += tmp;
    }
    cout << n * (n + 1) / 2 - s << endl;
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