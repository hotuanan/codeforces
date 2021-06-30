#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    cin >> a;
    int res = 0;
    int curr = (int)'a';

    for(auto c : a) {
        int target = (int)c;
        res += min(abs(curr - target), 26 - abs(curr - target));
        curr = target;
    }
    cout << res << endl;
}

int main()
{
    solve();
}