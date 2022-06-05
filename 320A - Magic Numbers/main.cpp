#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    string a;
    cin >> a;

    for(int i = 0; i < a.length(); i++) {
        if(a[i] != '1') {
            cout << "NO\n";
            return;
        }
        if (i == a.length() - 1) {
            break;
        }

        if (a[i + 1] == '4' && a[i + 2] == '4') {
            i += 2;
        }
        else if (a[i + 1] == '4') {
            i++;
        }
    }
    cout << "YES\n";

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
