#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    cin >> a;
    int l = a.length();
    int first;
    int last;
    string res = "";
    if(l & 1) {
        first = 0;
        last = l - 1;
    }
    else {
        first = l - 1;
        last = 0;
    }

    for(int i = 0; i < l; i++) {
        res = a[first] + res;
        swap(first, last);
        if(last > l/2) last--;
        else last++;
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