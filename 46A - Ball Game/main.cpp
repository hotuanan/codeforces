#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int start = 1;
    int next = 1;
    for (int i = 0; i < n - 1; i++) {
        start = (start + next) % n;
        if (!start) {
            cout << n << " ";
        }
        else {
            cout << start << " ";
        }
        next++;
    }
    cout << endl;
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