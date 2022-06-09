#include <bits/stdc++.h>
#include <string>
using namespace std;
 
int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

void solve() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    sort(v.begin(), v.end(), [](int x, int y) {
      return x % 2 < y % 2;
    });


    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            ans += gcd(v[i], 2 * v[j]) > 1;
        }
    }
    cout << ans << endl;
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
