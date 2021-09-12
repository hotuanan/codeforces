#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int res = 1;
    int tom = 0;
    int tmp;
    for(int i = 0; i < 4; i++) {
        cin >> tmp;
        tom += tmp;
    }    
    for(int i = 0; i < n - 1; i++) {
        int s = 0;
        for(int i = 0; i < 4; i++) {
            cin >> tmp;
            s += tmp;
        }
        if(s > tom) res++;
    }
    cout << res << endl;
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