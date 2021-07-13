#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int curr = 0;
    while(k > 0 && curr < n - 1) {
        if(v[curr] == 0) {
            curr++;
            continue;
        }

        if(v[curr] >= k) {
            v[curr] -= k;
            v[n-1] += k;
            break;
        }
        
        k -= v[curr];
        v[n-1] += v[curr];
        v[curr] = 0;
        curr++;
    }
    
    for(auto c : v) cout << c << " ";
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