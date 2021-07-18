#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int chest = 0;
    int bi = 0;
    int back = 0;
    for(int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if(i % 3 == 0) chest += tmp;
        else if(i % 3 == 1) bi += tmp;
        else back += tmp;
    }
    if(chest > bi && chest > back) cout << "chest\n";
    else if(back > bi && back > chest) cout << "back\n";
    else cout << "biceps\n";
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