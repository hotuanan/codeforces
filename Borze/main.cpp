#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    cin >> a;
    string r = "";
    for(int i = 0; i < a.length(); i++) {
        if(a[i] == '.') 
            r = r + "0";
        else {
            if(a[i + 1] == '.')
                r = r + "1";
            else
                r = r + "2";
            i++;
        }
    }
    cout << r + "\n";
}

int main()
{
    solve();
}