#include <bits/stdc++.h>
using namespace std;

long long dig_sum(long long n) 
{
    long long s = 0;
    while(n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

long long gcd(long long a, long long b) 
{
    if(b == 0) return a;
    else return gcd(b, a % b);
}

void solve() 
{
    long long n;
    cin >> n;
    while(gcd(n, dig_sum(n)) == 1) n++;
    cout << n << endl;
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