#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    cin >> a;
    int i, j;
    for(i = 0; i < a.length(); i++) 
        if(a[i] == '1') break;
    
    for(j = a.length() - 1; j >= i; j--) 
        if(a[j] == '1') break;
    
    int cnt = 0;
    for(; i <= j; i++) 
        if(a[i] == '0') cnt++;

    cout << cnt << endl;

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