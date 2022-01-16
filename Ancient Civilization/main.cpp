#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void solve() 
{
    int n, l;
    cin >> n >> l;
    vector<bitset<30>> b(n);
    for(int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        b[i] = bitset<30>(tmp);
    }

    bitset<30> res;
    for(int i = 0; i < l; i++) {
        int ones = 0;
        for(auto num : b) {
            if(num[i]) ones++;
        }
        if(ones > n - ones) res[i] = 1;
        else res[i] = 0;
    }
    cout << res.to_ulong() << endl;


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