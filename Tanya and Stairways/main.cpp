#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int ones = 0;
    int curr_ptr = -1;
    vector<int> v(n);
    fill(v.begin(), v.end(), 1);
    for(int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if(tmp == 1) {
            curr_ptr++;
            ones++;
        }
        else {
            v[curr_ptr]++;
        }
    }

    cout << ones << endl;
    for(int i = 0; i < curr_ptr + 1; i++) cout << v[i] << " ";
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