#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void solve() 
{
    int rows, cols;
    cin >> rows >> cols;
    vector<string> sol1;
    vector<string> sol2;

    for (int i = 0; i < rows; i++) {
        string s1(cols, 'R');
        string s2(cols, 'R');
        for (int j = 0; j < cols; j++) {
            if (i & 1) {
                if (j & 1) s1[j] = 'W';
                else s2[j] = 'W';
            }
            else {
                if (j & 1) s2[j] = 'W';
                else s1[j] = 'W';
            }
        }
        sol1.push_back(s1);
        sol2.push_back(s2);
    }

    vector<string> input(rows);
    for (auto &x : input) cin >> x;

    bool equals_first = false;
    bool equals_second = false;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (input[i][j] == '.') continue;
            equals_first |= input[i][j] == sol1[i][j];
            equals_second |= input[i][j] == sol2[i][j];
        }
    }

    if(equals_first && equals_second) {
        cout << "NO\n";
        return;
    }
    else {
        cout << "YES\n";
        auto sol = sol1;
        if(equals_second) sol = sol2;
        for(auto c : sol) cout << c << endl;
    }
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