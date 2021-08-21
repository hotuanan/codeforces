#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}

void solve() 
{
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        v[i] = pair<int, int>(tmp, i + 1);
    }
    sort(v.begin(), v.end(), comp);
    for(int i = 0; i < n/2; i++) {
        cout << v[i].second << " " << v[n - i - 1].second << endl;
    }
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