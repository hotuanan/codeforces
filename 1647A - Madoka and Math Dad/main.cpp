#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;

    int last = n % 3;
    int start = 2;
    if (last == 1) {
        start = 1;
    }
    int s = 0;
    while (s != n) {
        cout << start;
        s += start;
        start = 3 - start;
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