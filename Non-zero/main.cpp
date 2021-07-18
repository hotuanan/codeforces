#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int sum = 0;
    int res = 0;
    for(int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if(tmp == 0) {
            res++;
            tmp += 1;
        }

        sum += tmp;
    }
    if(sum == 0) res++;
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