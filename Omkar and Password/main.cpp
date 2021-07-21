#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    unordered_set<int> s;
    for(int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        s.insert(tmp);
    }
    if(s.size() == 1) cout << n << endl;
    else cout << 1 << endl;
    
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