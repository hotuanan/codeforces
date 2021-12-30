#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    unordered_map<int, int> m;
    for(int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        m[abs(tmp)]++;
    }
    int res = 0;
    for(auto [key, val] : m) {
        if(key == 0) res += 1;
        else if(val > 1) res += 2;
        else res += 1;
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