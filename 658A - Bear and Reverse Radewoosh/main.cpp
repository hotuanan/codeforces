#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, c;
    cin >> n >> c;
    vector<int> points(n);
    vector<int> time_f(n);
    vector<int> time_b(n);

    for (auto &x : points) cin >> x;
    for (auto &x : time_f) cin >> x;

    time_b[n - 1] = time_f[n - 1];
    for (int i = n - 2; i >= 0; i--)  {
        time_b[i] = time_b[i + 1] + time_f[i];
    }
    for (int i = 1; i < n; i++) {
        time_f[i] = time_f[i - 1] + time_f[i]; 
    }

    int L = 0;
    for (int i = 0; i < n; i++) {
        L += max(0, points[i] - c * time_f[i]);
    }
    int R = 0;
    for (int i = n - 1; i >= 0; i--) {
        R += max(0, points[i] - c * time_b[i]);
    }

    if (R == L) cout << "Tie\n";
    else if (R > L) cout << "Radewoosh\n";
    else cout << "Limak\n";

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