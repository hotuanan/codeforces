#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int left = 0;
    int right = 0;
    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        if(x < 0) left++;
        else right++;
    }
    if(left <= 1 || right <= 1) cout << "Yes\n";
    else cout << "No\n";

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