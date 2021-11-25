#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;

    int curr = 0;
    for(int i = 0; i <= n/2; i++) {
        int j;
        for(j = 0; j < n/2 - curr/2; j++) {
            cout << "*";
        }

        for(;j <= n/2 + curr/2; j++) {
            cout << "D";
        }

        for(; j < n; j++) {
            cout << "*";
        }
        cout << endl;
        curr += 2;

    }

    curr -= 4;
    for(int i = n/2 + 1; i < n; i++) {
        int j;
        for(j = 0; j < n/2 - curr/2; j++) {
            cout << "*";
        }

        for(;j <= n/2 + curr/2; j++) {
            cout << "D";
        }

        for(; j < n; j++) {
            cout << "*";
        }
        cout << endl;
        curr -= 2;
    }
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