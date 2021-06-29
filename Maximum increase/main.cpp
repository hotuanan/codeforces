#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int &x : vec) cin >> x;

    int res = -1;
    int curr = 1;
    for(int i = 1; i < n; i++) {
        if(vec[i - 1] < vec[i]) 
            curr++;
        else {
            res = max(res, curr);
            curr = 1;
        }
    }

    if(vec[n - 2] < vec[n - 1]) {
        res = max(res, curr);
    }

    cout << res << endl;
}
int main()
{
    solve();
}