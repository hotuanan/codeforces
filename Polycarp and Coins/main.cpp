#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int ones = n / 3; 
    int twos = ones;
    if(ones + 2 * twos + 1 == n) cout << ones + 1 << " " << twos << endl;
    else if(ones + 2 * twos + 2 == n) cout << ones << " " << twos + 1 << endl;
    else cout << ones << " " << twos << endl;

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