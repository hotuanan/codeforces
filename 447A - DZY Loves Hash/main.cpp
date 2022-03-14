#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int p, n;
    cin >> p >> n;

    vector<bool> buckets(p, false);

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if (buckets[tmp % p]) {
            cout << i + 1 << endl;
            return;
        }
        buckets[tmp % p] = true;
    }
    cout << "-1\n";
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