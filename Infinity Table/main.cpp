#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int next = 1;
    int r = 1;
    while(n > next) {
        next += 2 * r + 1;
        r++;
    }
    // cout << next << " " << r << endl;
    int c;
    if(n > next - r) c = next - n + 1;
    else {
        c = r;
        r = r - (next - n - r + 1);
    }
    cout << r << " " << c << endl;

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