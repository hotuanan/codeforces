#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    string a;
    cin >> n >> a;

    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y'};
    cout << a[0];
    for (int i = 1; i < n; i++) {
        if (vowels.find(a[i]) == vowels.end()) {
            cout << a[i];
            continue;
        }

        if (vowels.find(a[i - 1]) == vowels.end()) {
            cout << a[i];
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