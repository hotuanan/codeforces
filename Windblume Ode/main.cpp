#include <bits/stdc++.h>
using namespace std;

bool is_prime(int a) {
    for(int i = 2; i < sqrt(a) + 1; i++) {
        if(a % i == 0) return false;
    }
    return true;
}

void solve() 
{
    int n;
    cin >> n;
    int s = 0;
    vector<int> v(n);
    for(auto &x : v) {
        cin >> x;
        s += x;
    }

    if(s % 2 == 0 || !is_prime(s)) {
        cout << n << endl;
        for(int i = 1; i <= n; i++) cout << i << " ";
        cout << endl;
        return;
    }   
    
    cout << n - 1 << endl;
    int i;
    for(i = 0; i < n; i++) {
        if(v[i] & 1) break;
        cout << i + 1 << " ";
    }
    i++;
    for(; i < n; i++) {
        cout << i + 1 << " ";
    }
    cout << endl;

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