#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int l = 0;
    int r = 0;
    for(int i = 0; i < n; i++) {
        char in;
        cin >> in;
        if(in == 'L') l++;
        else r++;
    }

    cout << r + l + 1 << endl;
}


int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}