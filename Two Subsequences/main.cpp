#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string n;
    cin >> n;
    int m;
    int m_min = 9999;
    for(int i = 0; i < n.length(); i++) {
        if((int)n[i] < m_min) {
            m = i;
            m_min = (int)n[i];
        }
    }
    cout << n[m] << " ";
    for(int i = 0; i < n.length(); i++) {
        if(i == m) continue;
        cout << n[i];
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