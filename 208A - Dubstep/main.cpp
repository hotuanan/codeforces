#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve() 
{
    string a;
    cin >> a;
    string result = regex_replace(a, regex( "WUB" ), " ");
    int i = 0;
    while (result[i] == ' ') i++;
    cout << result[i];
    i++;
    for (; i < result.size(); i++) {
        if (result[i - 1] == ' ' && result[i] == ' ') continue;
        cout << result[i];
    }
    cout << endl;

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