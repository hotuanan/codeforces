#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, d;
    cin >> n >> d;
    vector<int> vec(n);
    bool all_good = true;
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
        if(vec[i] > d)
            all_good = false;
    }

    if(all_good) {
        cout << "YES\n";
        return;
    }

    int first = INT_MAX;
    int second = first;
    for(int i = 0; i < n; i++) {
        if(vec[i] < first) {
            second = first;
            first = vec[i];
        }
        else if(vec[i] < second) 
            second = vec[i];
    }
    
    if(first + second <= d) 
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}