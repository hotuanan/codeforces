#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    unordered_map<int, int> s;
    vector<int> v;
    for(int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if(s.find(tmp) == s.end()) {
            v.push_back(tmp);
            s[tmp] = 0;
        }
        else s[tmp] += 1;
    }
    sort(v.begin(), v.end());
    for(auto k : s) {
        for(int i = 0; i < k.second; i++) {
            v.push_back(k.first);
        }
    }
    for(auto x : v) cout << x << " ";
    cout << endl;


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