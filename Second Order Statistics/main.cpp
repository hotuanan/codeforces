#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    unordered_set<int> s;
    for(int i = 0; i < n; i++) {
        int curr;
        cin >> curr;
        s.insert(curr);
    }
    vector<int> v(s.begin(), s.end());
    sort(v.begin(), v.end());
    if(v.size() < 2) {
        cout << "NO\n";
        return;
    }
    cout << v[1] << endl;

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