#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    vector<vector<int>> h(5, vector<int> (5, 0));
    for (int i = 1; i < 4; i++) {
        for (int j = 1; j < 4; j++) {
            cin >> h[i][j];
        }
    }

    int res[5][5];

    for (int i = 1; i < 4; i++) {
        for (int j = 1; j < 4; j++) {
            res[i][j] = ((h[i][j] + h[i - 1][j] + h[i + 1][j] + h[i][j - 1] + h[i][j + 1]) % 2 == 0);
        }
    }
    

    for (int i = 1; i < 4; i++) {
        for (int j = 1; j < 4; j++) {
            cout << res[i][j];               
        }
        cout << endl;
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
