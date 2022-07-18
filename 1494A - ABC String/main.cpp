#include <bits/stdc++.h>
#include <string>
using namespace std;
 
bool is_valid(string a)
{
    vector<char> v;
    for (auto c : a) {
        if (c == '(') v.push_back(c);
        else {
            if (v.back() == '(') v.pop_back();
            else return false;
        }
    }

    return v.size() == 0;
}

void solve() 
{
    string a;
    cin >> a;
    int n = a.length();

    if (a[0] == a[n - 1]) {
        cout << "NO\n";
        return;
    }

    unordered_map<char, char> m;
    m[a[0]] = '(';
    m[a[n - 1]] = ')';


    string tr(a);
    for (int i = 0; i < n; i++) {
        if (m.find(a[i]) == m.end()) tr[i] = '('; 
        else tr[i] = m[a[i]];
    }
    if (is_valid(tr)) {
        cout << "YES\n";
        return;
    }
    
    for (int i = 0; i < n; i++) {
        if (m.find(a[i]) == m.end()) tr[i] = ')';
        else tr[i] = m[a[i]];
    }

    if (is_valid(tr)) cout << "YES\n";
    else cout << "NO\n";

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
