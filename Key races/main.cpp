#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    int first = s * v1 + 2 * t1;
    int second = s * v2 + 2 * t2;
    if(first > second) cout << "Second\n";
    else if(second > first) cout << "First\n";
    else cout << "Friendship\n";
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