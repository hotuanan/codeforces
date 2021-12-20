#include <bits/stdc++.h>
using namespace std;

void solve() 
{   
    int h[7];
    for(int i = 0; i < 7; i++) {
        cin >> h[i];
    }
    if(h[0] + h[1] == h[2]) cout << h[0] << " " << h[1] << " " << h[3] << endl;
    else cout << h[0] << " " << h[1] << " " << h[2] << endl;
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