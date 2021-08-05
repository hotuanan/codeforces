#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    string a;
    cin >> n >> a;
    string b = a;
    sort(b.begin(), b.end());
    int res = 0;
    for(int i = 0; i < n; i++) if(a[i] != b[i]) res++;
    cout << res << endl;

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