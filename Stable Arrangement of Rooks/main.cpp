#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, k;
    cin >> n >> k;

    if((n + 1) / 2 < k) {
        cout << -1 << endl;
        return;
    }
    int rooks = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j && !(j & 1) && rooks < k) {
                cout << "R";
                rooks++;
            }
            else cout << ".";
        }
        cout << "\n";
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