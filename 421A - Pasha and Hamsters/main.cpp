#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve() 
{
    int n, a, b;
    cin >> n >> a >> b;
    unordered_set<int> arthur;
    for (int i = 0; i < a; i++) {
        int tmp;
        cin >> tmp;
        arthur.insert(tmp);
    }
    for (int i = 0; i < b; i++) {
        int tmp;
        cin >> tmp;
    }
    for (int i = 1; i <= n; i++) {
        if (arthur.find(i) != arthur.end()) {
            cout << 1 << " ";
        }
        else {
            cout << 2 << " ";
        }
    }
    cout << endl;

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