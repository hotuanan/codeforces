#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    string first, second;
    cin >> n >> first >> second;
    if(first[0] == '1') {
        cout << "NO\n";
        return;
    }
    for(int i = 0; i < n - 2; i++) {
        if(first[i + 1] == '1' && second[i + 1] == '1') {
            cout << "NO\n";
            return;
        }
    }
    if(second[n - 1] == '1') {
        cout << "NO\n";
        return;
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