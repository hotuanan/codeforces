#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<string> bus(n);
    for(string &x : bus) cin >> x;

    bool have_result = false;
    for(string &x : bus) {
        for(int i = 0; i < 4; i++) {
            if(x[i] == 'O' && x[i + 1] == 'O') {
                have_result = true;
                x[i] = '+';
                x[i + 1] = '+';
                break;
            }
        }
        if(have_result) break;
    }

    if(!have_result) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    for(auto x : bus) {
        cout << x << endl;
    }

}
int main()
{
    solve();
}