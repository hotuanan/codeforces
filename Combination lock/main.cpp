#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    string s, t;
    cin >> n >> s >> t;
    vector<int> start(n);
    vector<int> target(n);

    for(int i = 0; i < n; i++) {
        start[i] = s[i] - '0';
        target[i] = t[i] - '0';
    }

    int res = 0;
    for(int i = 0; i < n; i++) {
        res += min(abs(start[i] - target[i]), 10 - abs(start[i] - target[i]));
    }
    cout << res << endl;
}

int main()
{
    solve();
}