#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, m;
    cin >> n >> m;

    unordered_set<int> seen;
    int tmp;
    int i;
    for(i = 0; i < n; i++) {
        cin >> tmp;
        seen.insert(tmp);
    }

    int res = -1;
    for(i = 0; i < m; i++) {
        cin >> tmp;
        if(seen.find(tmp) != seen.end()) {
            res = tmp;
            break;
        }
    }
    i++;
    for(; i < m; i++) {
        cin >> tmp;
    }
    cout << (res == -1 ? "NO" : ("YES\n1 " + to_string(res))) << endl;

}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >>t;
    while(t--)
        solve();

}