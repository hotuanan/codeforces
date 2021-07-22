#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, c0, c1, h;
    string a;
    cin >> n >> c0 >> c1 >> h >> a;
    int ones = 0;
    for(auto c : a) {
        if(c == '1') ones++;
    }
    int zeros = n - ones;

    if(c0 + h < c1) {
        cout << ones * h + n * c0 << endl;
    }
    else if(c1 + h < c0) {
        cout << zeros * h + n * c1 << endl;
    }
    else {
        cout << zeros * c0 + ones * c1 << endl;
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