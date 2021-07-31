#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> a;
vector<string> b;
void solve() 
{
    int q;
    cin >> q;
    q--;
    cout << a[(q % n)] + b[(q % m)] << endl;
}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cin >> n >> m;
    string s;
    for(int i = 0; i < n; i++) {
        cin >> s;
        a.push_back(s);
    }
    for(int i = 0; i < m; i++) {
        cin >> s;
        b.push_back(s);
    }

    int t;
    cin >> t;
    while(t--)
        solve();
}