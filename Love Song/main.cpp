#include <bits/stdc++.h>
using namespace std;

int n;
string a;
int s[100001];
void solve() 
{  
    int l, r;
    cin >> l >> r;
    cout << s[r] - s[l - 1] << endl;
}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    int t;
    cin >> n >> t;
    cin >> a;
    s[0] = 0;
    for(int i = 1; i <= n; i++) {
        s[i] = s[i - 1] + (int)a[i - 1] - 96;
    }
    while(t--)
        solve();
}