#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<string> v(n);
    int first_x = -1;
    int first_y = -1;
    int second_x = -1;
    int second_y = -1;
    for(int j = 0; j < n; j++) {
        cin >> v[j];
        for(int i = 0; i < n; i++) {
            if(v[j][i] == '*') {
                if(first_x == -1) {
                    first_x = i;
                    first_y = j;
                }
                else {
                    second_x = i;
                    second_y = j;
                }
            }
        }
    }
    if(first_y != second_y && first_x != second_x) {
        v[first_y][second_x] = '*';
        v[second_y][first_x] = '*';    
    }
    else if(first_y == second_y) {
        v[(first_y + 1 >= n ? first_y - 1 : first_y + 1)][second_x] = '*';
        v[(second_y + 1 >= n ? second_y - 1 : second_y + 1)][first_x] = '*'; 
    }
    else {
        v[first_y][(second_x + 1 >= n ? second_x - 1 : second_x + 1)] = '*';
        v[second_y][first_x + 1 >= n ? first_x - 1 : first_x + 1] = '*';
    }
    for(auto s : v) cout << s << endl;
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