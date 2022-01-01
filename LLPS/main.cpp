#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    cin >> a;
    int counts[26] = {0};
    for(auto c : a) {
        counts[(int)c - 97]++;
    }

    // for(int i = 0; i < 26; i++) {
    //     cout << counts[i] << endl;
    // }

    for(int i = 25; i >= 0; i--) {
        if(counts[i]) {
            for(int j = 0; j < counts[i]; j++) cout << (char)(i + 97);
            cout << endl;
            break;
        }
    }
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