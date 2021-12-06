#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int mi_pos;
    int ma_pos;
    for(int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if(tmp == 1) mi_pos = i;
        if(tmp == n) ma_pos = i;
    }
    cout << max(max(mi_pos - 0, abs(n - 1 - mi_pos)), max(ma_pos - 0, abs(n - 1 - ma_pos))) << endl;


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