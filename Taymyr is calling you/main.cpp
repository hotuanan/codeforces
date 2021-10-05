#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) 
{
    if(b == 0) return a;
    else return gcd(b, a % b);
}

void solve() 
{
    int n, m, z;
    cin >> n >> m >> z;
    int g = n * m / gcd(n, m);
    cout << z / g << endl;
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