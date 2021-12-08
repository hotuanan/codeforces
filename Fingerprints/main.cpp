#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, m;
    cin >> n >> m;
    vector<int> seq(n);
    unordered_set<int> fng;
    for(auto &x : seq) cin >> x;
    for(int i = 0; i < m; i++) {
        int tmp;
        cin >> tmp;
        fng.insert(tmp);
    }
    for(int i = 0; i < n; i++) {
        if(fng.find(seq[i]) != fng.end()) cout << seq[i] << " ";
    }
    cout << endl;
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