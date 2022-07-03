#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    long long n;
    cin >> n;
    long long s = 0;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        s += x % n;
    }

    int ones = s % n;
    cout << ones * (n - ones) << endl;


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
