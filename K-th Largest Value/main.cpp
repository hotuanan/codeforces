#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int ones;

void solve() 
{
    int o, x;
    cin >> o >> x;
    if(o == 2) {
        if(ones >= x) cout << "1\n";
        else cout << "0\n";
    }
    else {
        if(v[x - 1] == 1) {
            ones--;
            v[x - 1] = 0;
        }
        else {
            ones++;
            v[x - 1] = 1;
        }
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, t;
    ones = 0;
    cin >> n >> t;
    for(int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if(tmp == 1) ones++;
        v.push_back(tmp);
    }
    while(t--)
        solve();
}