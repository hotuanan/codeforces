#include <bits/stdc++.h>
using namespace std;

long long mi(long long a, long long b) {
    if(a < b) return a;
    else return b;
}

void solve() 
{
    long long yellow, blue;
    cin >> yellow >> blue;

    long long y_b, g_b, b_b;
    cin >> y_b >> g_b >> b_b;

    yellow -= y_b * 2;
    blue -= b_b * 3;
    yellow -= g_b;
    blue -= g_b;


    cout << abs(mi(0, yellow)) + abs(mi(0, blue)) << endl;




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