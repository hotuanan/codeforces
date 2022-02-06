#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int ones = 0;
    int twos = 0;
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        if (c == 1) ones++;
        else twos++;
    }
    cout << min(twos, ones) + (ones - min(twos, ones)) / 3 << endl;

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