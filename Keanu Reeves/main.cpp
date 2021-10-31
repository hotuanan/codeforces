#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    string a;
    cin >> n >> a;
    int hist[2] = {0};
    for(auto c : a) hist[c - '0']++;
    if(hist[0] != hist[1]) {
        cout << 1 << endl;
        cout << a << endl;
    }
    else {
        cout << 2 << endl;
        cout << a[0] << " " << a.substr(1, n - 1) << endl;
    }

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