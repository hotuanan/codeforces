#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int n;
    cin >> n;
    vector<int> meat(n);
    vector<int> prices(n);
    for (int i = 0; i < n; i++) cin >> meat[i] >> prices[i];

    int res = 0;

    for (int i = 0; i < n; i++) {
        int meat2buy = 0;
        int j = i;
        while (j < n && prices[i] <= prices[j]) {
            meat2buy += meat[j];
            j++;
        }
        res += meat2buy * prices[i];
        i = j - 1;
    }
    cout << res << endl;


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
