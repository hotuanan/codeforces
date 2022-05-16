#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve() 
{
    int n;
    cin >> n;

    int s = 1;
    int next_exp = 2;
    while (n % (s + next_exp) != 0) {
        s += next_exp;
        next_exp *= 2;
    }
    cout << n / (s + next_exp) << endl;

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