#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    if(n & 1) {
        cout << "-1\n";
        return;
    }
    
    for(int i = 1; i <= n; i++) {
        if(i & 1) 
            cout << i + 1;
        else 
            cout << i - 1;
        cout << " ";
    }
    cout << endl;

}


int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}