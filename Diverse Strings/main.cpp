#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    cin >> a;
    sort(a.begin(), a.end());
     for(int i = 0; i < a.length() - 1; i++) {
        int curr = (int)a[i] - 97;
        int next = (int)a[i + 1] - 97;
        if(curr == next || curr + 1 < next) {
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
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