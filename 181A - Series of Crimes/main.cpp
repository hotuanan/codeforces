#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve() 
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> points;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char c;
            cin >> c;
            if (c == '*') {
                points.push_back(make_pair(i, j));
            }
        }
    }
    sort(points.begin(), points.end());
    if (points[0].first == points[1].first) {
        if (points[2].second == points[1].second) {
            cout << points[2].first + 1 << " " << points[0].second + 1 << endl;
        }
        else {
            cout << points[2].first + 1 << " " << points[1].second + 1 << endl; 
        }
    } 
    else {
        if (points[0].second == points[1].second) {
            cout << points[0].first + 1 << " " << points[2].second + 1 << endl;
        }
        else {
            cout << points[0].first + 1 << " " << points[1].second + 1 << endl; 
        } 
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