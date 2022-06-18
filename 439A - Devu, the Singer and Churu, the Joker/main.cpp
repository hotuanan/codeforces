#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int n, d;
    cin >> n >> d;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int curr = 0;
    int jokes = 0;
    for (int i = 0; i < n; i++) {
        curr += v[i];
        if (curr > d) {
            cout << "-1\n";
            return;
        }

        if (curr + 10 <= d) {
            jokes += 2;
            curr += 10;
        }
        else if (curr + 5 <= d) {
            jokes++;
            curr += 5;
            if (i != n - 1) {
                cout << "-1\n";
                return;
            }
        }
    }
    jokes += (d - curr)/5;
    cout << jokes << endl;


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
