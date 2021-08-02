#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    int even = 0;
    int odd = 0;
    int odd_a = 0;
    int odd_b = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        if(!(v[i] & 1)) even = i + 1;
        else {
            odd++;
            if(!odd_a) odd_a = i + 1;
            else odd_b = i + 1; 
        }
    }
    if(even) cout << "1\n" << even << endl;
    else if(odd >= 2) cout << "2\n" << odd_a << " " << odd_b << endl;
    else cout << "-1\n";
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