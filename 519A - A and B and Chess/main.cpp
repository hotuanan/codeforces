#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    unordered_map<char, int> m;
    m = {{'Q', 9}, {'R', 5}, {'B', 3}, {'N', 3}, {'P', 1}};
    vector<vector<char>> v(8, vector<char> (8));

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> v[i][j];
        }
    }
    
    // white
    int white = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (m.find(v[i][j]) != m.end()) {
                white += m[v[i][j]];
            }
        }
    }

    int black = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (toupper(v[i][j]) != v[i][j]) {
                if (m.find(toupper(v[i][j])) != m.end()) {
                   black += m[toupper(v[i][j])];
                }
            }
        }
    }
    if (white > black) cout << "White\n";
    else if (white < black) cout << "Black\n";
    else cout << "Draw\n";

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
