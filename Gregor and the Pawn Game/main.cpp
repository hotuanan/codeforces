#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    string en;
    string me;
    cin >> en >> me;
    int res = 0;
    if(me[0] == '1') {
        if(en[0] == '0') res++;
        else if(en[1] == '1') {
            res++;
            en[1] = '0';
        }
    }

    for(int i = 1; i < n - 1; i++) {
        if(me[i] == '0') continue; 
        
        if(en[i] == '0') res++;
        else if(en[i - 1] == '1') {
            res++;
            en[i - 1] = '0';
        }
        else if(en[i + 1] == '1') {
            res++;
            en[i + 1] = '0';
        }
    }
    if(me[n - 1] == '1') {
        if(en[n - 1] == '0') res++;
        else if(en[n - 2] == '1') res++;
    }
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