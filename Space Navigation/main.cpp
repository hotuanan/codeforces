#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int x, y;
    cin >> x >> y;
    string a;
    cin >> a;
    int r = 0;
    int l = 0;
    int u = 0;
    int d = 0;
    for(auto c : a) {
        if(c == 'R') r++;
        else if(c == 'L') l++;
        else if(c == 'U') u++;
        else d++;
    }
    int my_x = r - l;
    int my_y = u - d;
    
    int miss_x = x - my_x;
    int miss_y = y - my_y;
    
    if(miss_x > 0) {
        if(l < miss_x) {
            cout << "NO\n";
            return;
        }
    }
    else if(miss_x < 0) {
        if(r < -miss_x) {
            cout << "NO\n";
            return;
        }
    }
    
    if(miss_y > 0) {
        if(d < miss_y) {
            cout << "NO\n";
            return;
        }
    }
    else if(miss_y < 0) {
        if(u < -miss_y) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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