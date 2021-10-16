#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    
    int i = 1;
    while(!is_sorted(v.begin(), v.end())) {
        if(i & 1) {
            for(int j = 0; j < n - 1; j += 2) {
                if(v[j] > v[j + 1]) swap(v[j], v[j + 1]);
            }
        }
        else {
            for(int j = 1; j < n - 1; j += 2) {
                if(v[j] > v[j + 1]) swap(v[j], v[j + 1]);
            }
        }
        i++;
    }
    cout << i - 1 << endl;
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