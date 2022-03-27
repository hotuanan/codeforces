#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    long long n, k;
    cin >> n >> k;
    long long max_winners = n/2;
    long long fold = max_winners/(k + 1);
    cout << fold << " " << k * fold << " " << n - ((k + 1)*fold) << endl;



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