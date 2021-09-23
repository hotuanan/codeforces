#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int a, b, c;
    cin >> a >> b >> c;
    int stones = 0;
    while(b > 0 && c > 1) {
        b--;
        c -= 2;
        stones += 3;
    }
    while(a > 0 && b > 1) {
        a--;
        b -= 2;
        stones += 3;
    }
    cout << stones << endl;

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