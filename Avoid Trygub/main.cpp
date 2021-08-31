#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    string a;
    cin >> n >> a;

    int last = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == 'b') {
            swap(a[i], a[last]);
            last++;
        }
    }

    cout << a << endl;

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