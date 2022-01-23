#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, m;
    cin >> n >> m;
    int first_y = -1;
    int left = -1;
    int sq_length = -1;
    for (int i = 0; i < n; i++) {
        string a;
        cin >> a;
        if (first_y != -1) continue;
        for (int j = 0; j < m; j++) {
            if (a[j] == 'B') {
                first_y = i;
                left = j;
                while (a[j] == 'B') j++;
                sq_length = j - 1 - left;
                break;
            }
        }
    }

    cout << 1 + first_y + sq_length/2 << " " << 1 + left + sq_length/2 << endl;


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