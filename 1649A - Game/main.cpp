#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int first_zero = 1;
    int last_zero = -1;
    int tmp;
    int i;
    for (i = 0; i < n; i++) {
        cin >> tmp;
        if (!tmp) {
            first_zero = i;
            last_zero = i;
            break;
        }
    }
    for (i = i + 1; i < n; i++) {
        cin >> tmp;
        if (!tmp) {
            last_zero = i;
        }
    }
    cout << last_zero + 1 - (first_zero - 1) << endl;
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