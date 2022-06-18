#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    for (int i = 0; i < n; i++) {
        if (v[i] == i) continue;
        else if (v[i] < i) {
            cout << "NO" << endl;
            return;
        }
        else {
            v[i + 1] += min(v[i] - i, 1000);
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
