#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    cin >> a;

    int qs = 0;
    for(auto c : a) qs += c == 'Q';

    int res = 0;
    int qs_so_far = 0;
    for(auto c : a) {
        if(c == 'Q') qs_so_far++;
        else if(c == 'A') res += (qs - qs_so_far)*qs_so_far;
    }
    cout << res << endl;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}