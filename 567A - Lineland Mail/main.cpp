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


    cout << v[1] - v[0] << " " << v[n - 1] - v[0] << endl;
    for(int i = 1; i < n - 1; i++) {
        cout << min(v[i + 1] - v[i], v[i] - v[i - 1]) << " " << max(v[n - 1] - v[i], v[i] - v[0]) << endl;
    }
    cout << v[n - 1] - v[n - 2] << " " << v[n - 1] - v[0] << endl;
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
