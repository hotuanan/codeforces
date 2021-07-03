#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    int res = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == 'x' && a[i + 1] == 'x' && a[i + 2] == 'x') res++;
    }

    cout << res << endl;
    

}


int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}