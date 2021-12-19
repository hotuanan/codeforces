#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int b_w, b_h;
    int x_w, x_h;
    int y_w, y_h;
    cin >> b_w >> b_h >> x_w >> x_h >> y_w >> y_h;

    while(b_h != 0) {
        b_w += b_h;
        if(b_h == x_h) b_w = max(0, b_w - x_w);
        else if(b_h == y_h) b_w = max(0, b_w - y_w);
        b_h--;
    }
    cout << b_w << endl;


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