#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int curr = 1;
    while(n > 1) {
        curr++;
        if(curr % 10 == 3 || curr % 3 == 0) continue;
        n--;
    }
    cout << curr << endl;
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