#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, m;
    cin >> n >> m;
    string curr, next;
    cin >> curr;
    next = curr;

    for(int i = 0; i < m; i++) {
        int changes = 0;
        // first element
        if(curr[1] == '1' && curr[0] == '0') {
            next[0] = '1';
            changes++;
        }
        // last element
        if(curr[n - 2] == '1' && curr[n - 1] == '0') {
            next[n - 1] = '1';
            changes++;
        }
        
        for(int j = 1; j < n - 1; j++) {
            if(curr[j] == '1') continue;
            if((curr[j - 1] == '0' && curr[j + 1] == '1') || (curr[j - 1] == '1' && curr[j + 1] == '0')) {
                next[j] = '1';
                changes++;
            }
        }

        if(!changes) break;
        curr = next;
    }
    cout << next << endl;


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