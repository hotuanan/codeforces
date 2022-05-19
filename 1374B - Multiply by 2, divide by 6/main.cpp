#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve() 
{
    int n;
    cin >> n;

    int twos = 0;
    int threes = 0;

    while (n % 2 == 0) {
        n /= 2;
        twos++;
    }
    while (n % 3 == 0) {
        n /= 3;
        threes++;
    }
    if (n == 1 && twos <= threes) {
        cout << 2 * threes - twos << endl;
    }
    else {
        cout << -1 << endl;
    }
    

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