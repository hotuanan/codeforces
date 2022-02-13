#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    cin >> a;
    int zeros = 0;
    int ones = 0;
    for (auto c : a) {
        if (c == '0') zeros++;
        else ones++;
    }

    if (ones == zeros) {
        cout << ones - 1 << endl;
    }
    else if (ones > zeros) {
        cout << zeros << endl;
    }
    else {
        cout << ones << endl;
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