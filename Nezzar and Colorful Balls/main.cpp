#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int ma = 1;
    int last;
    cin >> last;
    int curr;
    int current_max = 1;
    for(int i = 1; i < n; i++) {
        cin >> curr;
        if(curr == last) 
            current_max++;
        else {
            ma = max(current_max, ma);
            current_max = 1;
        }
        last = curr;
    }
    ma = max(current_max, ma);
    cout << ma << endl;
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