#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    string line = "qwertyuiop";
    string line2 = "asdfghjkl;";
    string line3 = "zxcvbnm,./";
    char c;
    string a;
    cin >> c >> a;
    int dir;
    if (c == 'R') dir = -1;
    else dir = 1;

    string res = "";
    for (auto c : a) {
        int pos = line.find(c);
        if (pos != -1) {
            res += line[pos + dir];
            continue;
        }
        pos = line2.find(c);
        if (pos != -1) {
            res += line2[pos + dir];
            continue;
        }
        pos = line3.find(c);
        if (pos != -1) {
            res += line3[pos + dir];
            continue;
        }
    }
    cout << res << endl;
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
