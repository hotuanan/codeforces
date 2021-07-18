#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, m;
    cin >> n >> m;
    unordered_set<int> s;
    int tmp;
    for(int i = 0; i < n; i++) {
        cin >> tmp;
        s.insert(tmp);
    }
    int res = 0;
    for(int i = 0; i < m; i++) {
        cin >> tmp;
        if(s.find(tmp) != s.end()) res++;
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