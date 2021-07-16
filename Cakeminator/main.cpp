#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int r, c;
    cin >> r >> c;
    unordered_set<int> s_x;
    unordered_set<int> s_y;
    for(int i = 0; i < r; i++) {
        string tmp;
        cin >> tmp;
        for(int j = 0; j < c; j++) {
            if(tmp[j] == 'S') {
                s_x.insert(j);
                s_y.insert(i);
            }
        }
    }
    int rows = r - s_y.size();
    int cols = c - s_x.size();
    cout << (rows * c) + (cols * r) - (cols * rows) << endl;
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