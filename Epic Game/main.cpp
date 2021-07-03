#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

void solve() 
{
    int a, b, n;
    cin >> a >> b >> n;
    int i = 1;
    while(n > 0) {
        if(i) {
            n -= gcd(a, n);
            i = 0;
        }
        else {
            n -= gcd(b, n);
            i = 1;
        }
    }

    if(i) cout << 1 << endl;
    else cout << 0 << endl;
    


}


int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}