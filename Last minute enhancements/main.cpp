#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int counter = 1;
    int last = v[0];
    for(int i = 1; i < n; i++) {
        if(v[i] == last) {
            v[i]++;
            counter++;
            last = v[i];
        }
        else if(v[i] > last) {
            counter++;    
            last = v[i];
        } 
    }

    cout << endl;
    cout << counter << endl;
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