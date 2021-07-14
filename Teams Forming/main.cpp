#include <bits/stdc++.h>
using namespace std;

void solve() 
{
   int n;
   cin >> n;
   vector<int> v(n);
   for(auto &x : v) cin >> x;
   sort(v.begin(), v.end());
   int res = 0;
   for(int i = 1; i < n; i += 2) res += v[i] - v[i - 1];
   cout << res << endl;
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