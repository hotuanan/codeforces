#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, l, r, k;
    cin >> n >> l >> r >> k;
    vector<int> vec;
    for(int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if(tmp <= r && tmp >= l) vec.push_back(tmp);
    }

    sort(vec.begin(), vec.end());
    int res = 0;
    int curr = 0;
    while(k > 0 && curr < vec.size()) {
        
        if(vec[curr] <= k) {
            res++;
            k -= vec[curr];
        }
        curr++;
    }
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