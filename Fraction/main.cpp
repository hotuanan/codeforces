#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int a = n/2;
    int b = n/2 + 1;
    if (n % 2 == 0) a -= 1;
    if (!(a & 1)  && !(b & 1)) {
        a -= 1;
        b += 1;

    }
    cout << a << " " << b << endl;
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