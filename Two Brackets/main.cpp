#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    cin >> a;
    int sq = 0;
    int br = 0;
    int res = 0;
    for(auto c : a) {
        if(c == '(') br++;
        else if(c == '[') sq++;
        else if(c == ')' && br > 0) {
            br--;
            res++;
        }
        else if(c == ']' && sq > 0) {
            sq--;
            res++;
        }
    }
    cout << res << endl;   
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