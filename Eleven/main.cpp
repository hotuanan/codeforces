#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    string res = "OO";
    int a = 2;
    int b = 1;
    if(n == 1) {
        cout << "O\n";
        return;
    }
    else if(n == 2) {
        cout << "OO\n";
        return;
    }
    for(int i = 3; i <= n; i++) {
        if(a + b == i) {
            int tmp = a + b;
            b = a;
            a = tmp;
            res += "O";
        }
        else {
            res += "o";
        }
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