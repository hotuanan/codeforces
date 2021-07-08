#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    long long x;
    cin >> n >> x;
    int kids = 0;
    for(int i = 0; i < n; i++) {
        char op;
        int num;
        cin >> op >> num;
        if(op == '-') {
            if(x < num) kids++;
            else x-= num;
        }
        else {
            x += num;
        }
    }
    cout << x << " " << kids << endl;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}