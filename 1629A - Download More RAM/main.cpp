#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> run(n);
    vector<int> gain(n);

    for (int i = 0; i < n; i++) {
        int r;
        cin >> r;
        run[i] = make_pair(r,i);
    }
    for (auto &x : gain) {
        cin >> x;
    }

    sort(run.begin(),run.end());

    for (int i = 0; i< n; i++) {
        if (k < run[i].first) break;

        k += gain[run[i].second];
    }
    cout << k << endl;    

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