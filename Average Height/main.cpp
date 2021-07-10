#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> e;
    vector<int> o;
    int i,j;    
    for(i = 0; i < n; i++) {
        int input;
        cin >> input;
        if(input & 1) o.push_back(input);
        else e.push_back(input);
    }
    for(i = 0; i < o.size(); i++) cout << o[i] << " ";
    for(j = 0; j < e.size(); j++) cout << e[j] << " ";
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