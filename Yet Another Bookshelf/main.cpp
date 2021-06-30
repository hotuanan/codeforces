#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int &x : vec) cin >> x;
    int i;
    for(i = 0; i < n; i++) {
        if(vec[i] == 1) {
            break;
        }
    }
    int j;
    for(j = n - 1; j >= 0; j--) {
        if(vec[j] == 1) {
            break;
        }
    }

    int cnt = 0;
    for(;i <= j; i++) {
        if(vec[i] == 0) {
            cnt++;
        }
    }
    cout << cnt << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}