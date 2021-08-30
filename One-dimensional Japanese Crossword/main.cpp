#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    string a;
    cin >> n >> a;
    vector<int> res;
    for(int i = 0; i < n; i++) {
        if(a[i] == 'B') {
            int c = 0;
            while(a[i++] == 'B') c++;
            res.push_back(c);
            i--;
        }
    }
    cout << res.size() << endl;
    for(auto x : res) cout << x << " ";
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