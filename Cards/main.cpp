#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    int ns = 0;
    int rs = 0;

    for(auto c : a) {
        if(c == 'n') ns++;
        else if(c == 'r') rs++;
    }

    for(int i = 0; i < ns; i++) cout << "1 ";
    for(int i = 0; i < rs; i++) cout << "0 ";
    cout << endl;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}