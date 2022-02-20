#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string a;
    getline(cin, a);

    int idx = a.length() - 1;
    while (a[idx] == '?' || a[idx] == ' ') {
        idx--;
    }

    char last_letter = toupper(a[idx]);

    if (last_letter == 'A' || last_letter == 'E' || last_letter == 'I' || last_letter == 'O' || last_letter == 'U' || last_letter == 'Y') {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }    

}

int main()
{
    ios::sync_with_stdio(false); 
    // cin.tie(0);
    // int t;
    // cin >> t;
    // while(t--)
        solve();
}