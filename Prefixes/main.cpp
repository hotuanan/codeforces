#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    string a;
    cin >> n >> a;
    string res = a;
    int as = 0;
    int bs = 0;
    int count = 0;
    for(int i = 1; i < n; i += 2) {
        if(a[i - 1] == 'a') as++;
        else bs++;
        if(a[i] == 'a') as++;
        else bs++;
        if(as == bs) continue;
        count++;
        if(as > bs) {
            as--;
            bs++;
            if(a[i] == 'a') res[i] = 'b';
            else res[i - 1] = 'b';
        }
        else {
            bs--;
            as++;
            if(a[i] == 'b') res[i] = 'a';
            else res[i - 1] = 'a';
        }  
    }
    cout << count << endl << res << endl;
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