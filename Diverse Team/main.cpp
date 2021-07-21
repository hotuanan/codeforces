#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, k;
    cin >> n >> k;
    unordered_set<int> have;
    unordered_set<int> idxs;
    for(int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if(k == 0) continue;
        if(have.find(tmp) == have.end()) {
            have.insert(tmp);
            idxs.insert(i);
            k--;
        }
    }
    if(k > 0) cout << "NO\n";
    else {
        cout << "YES\n";
        for(auto x : idxs) cout << x + 1<< " ";
        cout << endl;
    }
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