#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int s = 0;
    for(int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        s += tmp;
    }
    int res = (s + (s % n)) / n;
    if(n * res < s) res++;
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