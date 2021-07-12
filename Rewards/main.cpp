#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int a, b, c;
    cin >> a >> b >> c;
    int cups = a + b + c; // 5
    cin >> a >> b >> c;
    int medals = a + b + c; // 10
    int shelves;
    cin >> shelves;
    
    if((cups + 4)/5 + (medals + 9)/10 <= shelves) cout << "YES\n";
    else cout << "NO\n";


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