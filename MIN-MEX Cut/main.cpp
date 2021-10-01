#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    cin >> a;
    int zeroes = count(a.begin(), a.end(), '0');
    if (zeroes == 0) {
        cout << "0\n";
        return;
    }
    int first = a.find('0');
    int last = a.rfind('0');
    if (last - first + 1 == zeroes) cout << "1\n";
    else cout << "2\n";
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