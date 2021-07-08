#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    cin >> a;
    vector<int> v;
    int cum = 0;
    for(int i = 0; i < a.length(); i++) {
        if(a[i] == '1') {
            cum++;
            int j;
            for(j = i + 1; j < a.length(); j++) {
                if(a[j] != '1') break;
                cum++;
            }
            i = j;
            v.push_back(cum);
            cum = 0;
        }
    }
    
    sort(v.begin(), v.end());
    int res = 0;
    for(int i = v.size() - 1; i >= 0; i -= 2) res += v[i];
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