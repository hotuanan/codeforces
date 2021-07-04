#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int twos, threes, fives, sixes;
    cin >> twos >> threes >> fives >> sixes;
    int m = min(twos, min(fives, sixes));
    int res = m * 256;
    twos -= m;
    fives -= m;
    sixes -= m;

    res += min(twos, threes) * 32;

    cout << res << endl;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}