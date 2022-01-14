#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<string> v(n - 2);
    for(auto &x: v) cin >> x;
    string f = "";
    for(int i = 0; i < n - 3; i++) {
        if(v[i][1] != v[i + 1][0]) {
            string f = "";
            f += v[i][1];
            f += v[i + 1][0];
            v.insert(v.begin() + i + 1, f);
            break;
        }
    }
    if(f == "") v.push_back("aa");
    cout << v[0][0];
    for(int i = 0; i < n - 1; i++) {
        cout << v[i][1];
    }
    cout << endl;

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