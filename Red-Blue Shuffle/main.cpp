#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    string x;
    string y;
    cin >> n >> x >> y;

    int r = 0;
    int b = 0;
    for(int i = 0; i < n; i++) {
        if(x[i] > y[i]) r++;
        else if(x[i] < y[i]) b++;
    }
    if(r == b) cout << "EQUAL\n";
    else if(r > b) cout << "RED\n";
    else cout << "BLUE\n";
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