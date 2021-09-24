#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int outer = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < outer; j++) {
            cout << "(";
        }
        for(int j = 0; j < n - outer; j++) {
            cout << "()";
        }
        for(int j = 0; j < outer; j++) {
            cout << ")";
        }
        outer++;
        cout << endl;
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