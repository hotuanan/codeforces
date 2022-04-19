#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> a(n);
    int smallest = 0;
    int highest = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < a[smallest]) {
            smallest = i;
        }
        if (a[i] > a[highest]) {
            highest = i;
        }
    }
    cout << smallest + 1 << " " << highest + 1 << endl;
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