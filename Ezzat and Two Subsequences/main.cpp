#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    double sum = 0;
    long long m = INT_MIN;
    for(int i = 0; i < n; i++) {
        long long tmp;
        cin >> tmp;
        m = max(m, tmp);
        sum += tmp;
    }
    sum -= m;
    sum /= n - 1;
    cout << fixed << setprecision(10) << sum + m << endl;
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