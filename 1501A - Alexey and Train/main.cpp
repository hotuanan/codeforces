#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> arrival(n + 1);
    vector<int> departure(n + 1);
    vector<int> extra(n + 1);
    departure[0] = 0;
    arrival[0] = 0;
    for (int i = 1; i < n + 1; i++) {
        cin >> arrival[i] >> departure[i];
    }
    for (int i = 1; i < n + 1; i++) {
        cin >> extra[i];
    }
    int curr_moment = 0;
    for (int i = 1; i < n; i++) {
        curr_moment = max(arrival[i] + extra[i], curr_moment + extra[i] + arrival[i] - departure[i - 1]);
        curr_moment += (departure[i] - arrival[i] + 1)/2;
    }
    curr_moment = max(arrival[n] + extra[n], curr_moment + extra[n] + arrival[n] - departure[n - 1]);
    cout << curr_moment << endl;



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