#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    int ma_a = 0;
    cout << v[0] << " ";
    ma_a = max(ma_a, v[0]);
    for (int i = 1; i < n; i++) {
        cout << v[i] + ma_a << " ";
        ma_a = max(ma_a, v[i] + ma_a);
    }
    cout << endl;


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
