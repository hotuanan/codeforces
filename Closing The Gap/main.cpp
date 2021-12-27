#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int s = 0;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        s += tmp;
    }

    cout << (s % n == 0 ? "0\n" : "1\n");

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