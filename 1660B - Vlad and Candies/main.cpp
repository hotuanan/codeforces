#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int first_max = 0;
    int second_max = 0;

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if (tmp > first_max) {
            second_max = first_max;
            first_max = tmp;
        } else if (tmp > second_max) {
            second_max = tmp;
        }
    }
    
    if (first_max - 1 > second_max) {
        cout << "NO\n";
    } 
    else {
        cout << "YES\n";
    }

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