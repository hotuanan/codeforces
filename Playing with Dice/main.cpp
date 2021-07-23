#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int a, b;
    cin >> a >> b;
    int win = 0;
    int draw = 0;
    int lose = 0;
    for(int i = 1; i <= 6; i++) {
        if(abs(a - i) < abs(b - i)) win++;
        else if(abs(a - i) > abs(b - i)) lose++;
        else draw++;
    }
    cout << win << " " << draw << " " << lose << endl;
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