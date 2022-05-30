#include <bits/stdc++.h>
#include <string>
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
    if (min(ones, zeros) & 1) cout << "DA\n";
    else cout << "NET\n";
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
